/**
 * @file Storm grammar for tree-sitter
 * @author Nicolas Picard
 * @license MIT
 */

/* eslint-disable-arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'storm',

  extras: ($) => [
    /\s/,
    $.comment,
  ],

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) => choice(
      $._simple_statement,
      $._compound_statement,
    ),

    // Simple statements
    _simple_statement: ($) => choice(
      $.expression_statement,
      $.variable_assignment,
      $.return_statement,
      $.emit_statement,
      $.break_statement,
      $.continue_statement,
      $.yield_statement,
      $.divert_statement,
      $.spin_statement,
    ),

    // Compound statements
    _compound_statement: ($) => choice(
      $.function_definition,
      $.initblock,
      $.finiblock,
      $.emptyblock,
    ),

    expression_statement: ($) => $._expression,
    _expression: ($) => choice(
      $.variable,
      $.function_call,
      $.selector_expression,
      // TODO: check for literal which does not look like string
      // $.identifier,
      $.literal,
    ),

    variable_assignment: ($) => seq($.variable, '=', field('value', $._expression)),

    identifier: (_) => /\w+/,
    variable: ($) => seq('$', field('name', $.identifier)),

    selector_expression: ($) => seq(
      field('object', $._expression),
      token.immediate('.'),
      field('attribute', $.identifier),
    ),
    // attribute_reference: ($) => seq(
    //   field('object', choice($.variable, $.attribute_reference)),
    //   token.immediate('.'),
    //   field('attribute', $.identifier),
    // ),

    // Function calls
    keyword_argument: ($) => seq(
      field('name', $.identifier),
      '=',
      field('value', $._expression),
    ),
    argument: ($) => choice($._expression, $.keyword_argument),
    arguments: ($) => seq(token.immediate('('), commaSep($.argument), ')'),
    function_call: ($) => seq(
      field('name', $._expression),
      field('args', $.arguments),
    ),

    integer: (_) => token(prec(1, /-?\d+/)),
    float: (_) => token(prec(2, /-?\d+\.\d+/)),

    // Literals
    literal: ($) => choice(
      $.float,
      $.integer,
      $.string,
    ),

    return_statement: ($) => seq('return', token.immediate('('), optional($._expression), ')'),
    emit_statement: ($) => seq('emit', $._expression),
    break_statement: (_) => prec.left('break'),
    continue_statement: (_) => prec.left('continue'),

    // Function definitions
    funcarg: ($) => seq(
      field('name', $.identifier),
      optional(seq(
        token.immediate('='),
        field('default_value', $._expression),
      )),
    ),
    funcargs: ($) => seq(token.immediate('('), commaSep($.funcarg), ')'),
    function_definition: ($) => seq(
      'function',
      field('name', $.identifier),
      field('arguments', $.funcargs),
      $.block,
    ),


    // Edit block: zero or more edit operations inside a single set of square brackets
    // _editblock: ($) => seq('[', repeat($._editoper), ']'),

    // A single edit operation
    // _editoper: ($) => choice(
    //   $.edittagadd,
    //   $.edittagdel,
    // ),

    // edittagadd: ($) => seq(
    //   '+',
    //   optional($.SETTAGOPER),
    //   field('name', $.tagname),
    //   optional($._valu),
    // ),
    // edittagdel: ($) => seq('-', field('name', $.tagname)),

    // MODSET: (_) => choice('+=', '-='),
    // TRYSETPLUS: (_) => '?+=',
    // TRYSETMINUS: (_) => '?-=',
    // TRYSET: (_) => '?=',
    // SETTAGOPER: (_) => '?',

    // The set of non-edit non-commands in storm
    // _oper: ($) => choice(
    //   $.stormfunc,
    //   $.initblock,
    //   // $.opervarlist,
    //   $.setitem,
    //   $.break,
    //   $.continue,
    //   $.return,
    //   $.emit,
    //   $.stop,
    //   // $.ifstmt,
    // ),

    stop: (_) => 'stop',

    // setitem: ($) => seq(
    //   '$',
    //   $._varvaluatom, '.', choice(
    //     $.VARTOKN,
    //     seq('$', $.varvalue),
    //     // $.formatstring,
    //     // $._derefexpr,
    //   ),
    //   $._valu,
    // ),

    // A variable assignment
    // _single_var_declaration: ($) => seq('$', field('name', $.identifier), '=', field('value', $._valu)),
    // A bare variable list
    // _multi_var_declaration: ($) => seq('(', commaSep1(seq('$', field('name', $.identifier))), ')',
    //   '=',
    //   '(',
    //   commaSep1($._expression),
    //   ')',
    // ),
    // Assignment
    // var_declaration: ($) => choice(
    //   $._single_var_declaration,
    //   $._multi_var_declaration,
    // ),

    // A variable list assignment
    // opervarlist: ($) => seq($.varlist, '=', $._valu),


    // tagname: ($) => seq('#', choice($._varvalu, $._tagsegs)),
    // _tagsegs: ($) => seq($.TAGSEGNOVAR, repeat(
    //   seq('.', choice(
    //     $.TAGSEGNOVAR,
    //     seq('$', $.varvalue),
    //   )),
    // )),
    // TAGSEGNOVAR: (_) => /[\w]+/,


    _triple_quoted_string: (_) => prec(1, seq(
      '\'\'\'',
      repeat(/[^\']/),
      '\'\'\'',
    )),
    _double_quoted_string: ($) => seq(
      '"',
      repeat(choice(
        /[^\"]/,
        $.escape_sequence,
      )),
      '"',
    ),
    _single_quoted_string: (_) => seq('\'', repeat(/[^\']/), '\''),
    string: ($) => choice(
      $._double_quoted_string,
      $._single_quoted_string,
      $._triple_quoted_string,
      $._formatstring,
      $.identifier,
    ),

    // Use the same escape sequences as Python
    escape_sequence: (_) => token.immediate(prec(1, seq(
      '\\',
      choice(
        /u[a-fA-F\d]{4}/,
        /U[a-fA-F\d]{8}/,
        /x[a-fA-F\d]{2}/,
        /\d{3}/,
        /\r?\n/,
        /['"abfrntv\\]/,
        /N\{[^}]+\}/,
      ),
    ))),

    interpolation: ($) => prec(1, seq(
      '{',
      field('expression', choice(
        $.identifier,
        $._expression,
      )),
      '}',
    )),

    _formatstring: ($) => seq(
      '`',
      repeat(
        choice(
          (/[^`]/),
          $.interpolation,
        ),
      ),
      '`',
    ),

    block: ($) => seq('{', repeat($._statement), '}'),


    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: (_) => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),


    // A bare variable reference, useful for a function call
    // vareval: ($) => alias($._varvalu, 'vareval'),

    // Control Flow

    // https://synapse.docs.vertex.link/en/latest/synapse/userguides/storm_adv_control.html#init-block
    initblock: ($) => seq('init', $.block),
    // https://synapse.docs.vertex.link/en/latest/synapse/userguides/storm_adv_control.html#fini-block
    finiblock: ($) => seq('fini', $.block),
    // https://synapse.docs.vertex.link/en/latest/synapse/userguides/storm_adv_control.html#empty-block
    emptyblock: ($) => seq('empty', $.block),

    spin_statement: (_) => 'spin',
    yield_statement: ($) => seq('yield', $._expression),
    divert_statement: ($) => seq(
      'divert',
      field('cond', $._expression),
      field('genr', $._expression),
    ),

    // https://synapse.docs.vertex.link/en/latest/synapse/userguides/storm_adv_control.html#if-else-statement
    // if_statement: ($) => seq(
    //   'if',
    //   field('condition', $._expression),
    //   field('consequence', $.block),
    //   repeat(field('alternative', $.elif_clause)),
    //   optional(field('alternative', $.else_clause)),
    // ),
    // elif_clause: ($) => seq('elif', field('condition', $._expression), field('consequence', $.block)),
    // else_clause: ($) => seq('else', field('consequence', $.block)),


    // A value consisting of a name then 0 or more derefs and function calls
    // _varvalu: ($) => seq('$', $._varvaluatom),
    // _varvaluatom: ($) => choice(
    //   $.varvalue,
    //   // $.funccall,
    // ),
    // varvalue: ($) => alias($.VARTOKN, 'varvalue'),
    // VARTOKN: ($) => choice(/\w+/, $.DOUBLEQUOTEDSTRING, $.SINGLEQUOTEDSTRING),
    //
    // _rootvalu: ($) => choice(
    //   $.string,
    // ),
    //
    // // Common subset + stuff allowable in command arguments
    // _argvalu: ($) => choice(
    //   $._rootvalu,
    //   // $.valulist,
    //   // $.embedquery,
    // ),
    // // Used for most instances of values
    // _basevalu: ($) => choice(
    //   $._argvalu,
    //   // $.baresubquery,
    // ),
    // _valu: ($) => choice(
    //   $._basevalu,
    //   // $.NONQUOTEWORD,
    // ),
    //
    // bool: ($) => choice($.true, $.false),
    // true: (_) => choice('true', '$lib.true'),
    // false: (_) => choice('false', '$lib.false'),
    // null: (_) => choice('null', '$lib.null'),
    //
    // not: (_) => 'not',
    // or: (_) => 'or',
    // and: (_) => 'and',

  },
});

/**
  * Helper function to create a comma separated list of at least one element
  * @param {RuleOrLiteral} rule - The rule to repeat
  * @return {SeqRule}
  */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
  * Helper function to create an optional comma separated list elements
  * @param {RuleOrLiteral} rule - The rule to repeat
  * @return {ChoiceRule}
  */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
