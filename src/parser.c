#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_EQ = 1,
  sym_identifier = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_DOT = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  sym_integer = 8,
  sym_float = 9,
  anon_sym_return = 10,
  anon_sym_emit = 11,
  anon_sym_break = 12,
  anon_sym_continue = 13,
  anon_sym_EQ2 = 14,
  anon_sym_function = 15,
  sym_stop = 16,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 17,
  aux_sym__triple_quoted_string_token1 = 18,
  anon_sym_DQUOTE = 19,
  aux_sym__double_quoted_string_token1 = 20,
  anon_sym_SQUOTE = 21,
  sym_escape_sequence = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_BQUOTE = 25,
  aux_sym__formatstring_token1 = 26,
  sym_comment = 27,
  anon_sym_init = 28,
  anon_sym_fini = 29,
  anon_sym_empty = 30,
  sym_spin_statement = 31,
  anon_sym_yield = 32,
  anon_sym_divert = 33,
  sym_source_file = 34,
  sym__statement = 35,
  sym__simple_statement = 36,
  sym__compound_statement = 37,
  sym_expression_statement = 38,
  sym__expression = 39,
  sym_variable_assignment = 40,
  sym_variable = 41,
  sym_selector_expression = 42,
  sym_keyword_argument = 43,
  sym_argument = 44,
  sym_arguments = 45,
  sym_function_call = 46,
  sym_literal = 47,
  sym_return_statement = 48,
  sym_emit_statement = 49,
  sym_break_statement = 50,
  sym_continue_statement = 51,
  sym_funcarg = 52,
  sym_funcargs = 53,
  sym_function_definition = 54,
  sym__triple_quoted_string = 55,
  sym__double_quoted_string = 56,
  sym__single_quoted_string = 57,
  sym_string = 58,
  sym_interpolation = 59,
  sym__formatstring = 60,
  sym_block = 61,
  sym_initblock = 62,
  sym_finiblock = 63,
  sym_emptyblock = 64,
  sym_yield_statement = 65,
  sym_divert_statement = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_arguments_repeat1 = 68,
  aux_sym_funcargs_repeat1 = 69,
  aux_sym__triple_quoted_string_repeat1 = 70,
  aux_sym__double_quoted_string_repeat1 = 71,
  aux_sym__formatstring_repeat1 = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_return] = "return",
  [anon_sym_emit] = "emit",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_EQ2] = "=",
  [anon_sym_function] = "function",
  [sym_stop] = "stop",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym__triple_quoted_string_token1] = "_triple_quoted_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quoted_string_token1] = "_double_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BQUOTE] = "`",
  [aux_sym__formatstring_token1] = "_formatstring_token1",
  [sym_comment] = "comment",
  [anon_sym_init] = "init",
  [anon_sym_fini] = "fini",
  [anon_sym_empty] = "empty",
  [sym_spin_statement] = "spin_statement",
  [anon_sym_yield] = "yield",
  [anon_sym_divert] = "divert",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_variable_assignment] = "variable_assignment",
  [sym_variable] = "variable",
  [sym_selector_expression] = "selector_expression",
  [sym_keyword_argument] = "keyword_argument",
  [sym_argument] = "argument",
  [sym_arguments] = "arguments",
  [sym_function_call] = "function_call",
  [sym_literal] = "literal",
  [sym_return_statement] = "return_statement",
  [sym_emit_statement] = "emit_statement",
  [sym_break_statement] = "break_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_funcarg] = "funcarg",
  [sym_funcargs] = "funcargs",
  [sym_function_definition] = "function_definition",
  [sym__triple_quoted_string] = "_triple_quoted_string",
  [sym__double_quoted_string] = "_double_quoted_string",
  [sym__single_quoted_string] = "_single_quoted_string",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__formatstring] = "_formatstring",
  [sym_block] = "block",
  [sym_initblock] = "initblock",
  [sym_finiblock] = "finiblock",
  [sym_emptyblock] = "emptyblock",
  [sym_yield_statement] = "yield_statement",
  [sym_divert_statement] = "divert_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_funcargs_repeat1] = "funcargs_repeat1",
  [aux_sym__triple_quoted_string_repeat1] = "_triple_quoted_string_repeat1",
  [aux_sym__double_quoted_string_repeat1] = "_double_quoted_string_repeat1",
  [aux_sym__formatstring_repeat1] = "_formatstring_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_emit] = anon_sym_emit,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_function] = anon_sym_function,
  [sym_stop] = sym_stop,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym__triple_quoted_string_token1] = aux_sym__triple_quoted_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quoted_string_token1] = aux_sym__double_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym__formatstring_token1] = aux_sym__formatstring_token1,
  [sym_comment] = sym_comment,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_fini] = anon_sym_fini,
  [anon_sym_empty] = anon_sym_empty,
  [sym_spin_statement] = sym_spin_statement,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_divert] = anon_sym_divert,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_variable] = sym_variable,
  [sym_selector_expression] = sym_selector_expression,
  [sym_keyword_argument] = sym_keyword_argument,
  [sym_argument] = sym_argument,
  [sym_arguments] = sym_arguments,
  [sym_function_call] = sym_function_call,
  [sym_literal] = sym_literal,
  [sym_return_statement] = sym_return_statement,
  [sym_emit_statement] = sym_emit_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_funcarg] = sym_funcarg,
  [sym_funcargs] = sym_funcargs,
  [sym_function_definition] = sym_function_definition,
  [sym__triple_quoted_string] = sym__triple_quoted_string,
  [sym__double_quoted_string] = sym__double_quoted_string,
  [sym__single_quoted_string] = sym__single_quoted_string,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__formatstring] = sym__formatstring,
  [sym_block] = sym_block,
  [sym_initblock] = sym_initblock,
  [sym_finiblock] = sym_finiblock,
  [sym_emptyblock] = sym_emptyblock,
  [sym_yield_statement] = sym_yield_statement,
  [sym_divert_statement] = sym_divert_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_funcargs_repeat1] = aux_sym_funcargs_repeat1,
  [aux_sym__triple_quoted_string_repeat1] = aux_sym__triple_quoted_string_repeat1,
  [aux_sym__double_quoted_string_repeat1] = aux_sym__double_quoted_string_repeat1,
  [aux_sym__formatstring_repeat1] = aux_sym__formatstring_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [sym_stop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__triple_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__formatstring_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fini] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [sym_spin_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divert] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_emit_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_funcarg] = {
    .visible = true,
    .named = true,
  },
  [sym_funcargs] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__triple_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__formatstring] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_initblock] = {
    .visible = true,
    .named = true,
  },
  [sym_finiblock] = {
    .visible = true,
    .named = true,
  },
  [sym_emptyblock] = {
    .visible = true,
    .named = true,
  },
  [sym_yield_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_divert_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_funcargs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__triple_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__formatstring_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_arguments = 2,
  field_attribute = 3,
  field_cond = 4,
  field_default_value = 5,
  field_expression = 6,
  field_genr = 7,
  field_name = 8,
  field_object = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_arguments] = "arguments",
  [field_attribute] = "attribute",
  [field_cond] = "cond",
  [field_default_value] = "default_value",
  [field_expression] = "expression",
  [field_genr] = "genr",
  [field_name] = "name",
  [field_object] = "object",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_args, 1},
    {field_name, 0},
  [3] =
    {field_cond, 1},
    {field_genr, 2},
  [5] =
    {field_attribute, 2},
    {field_object, 0},
  [7] =
    {field_value, 2},
  [8] =
    {field_name, 0},
  [9] =
    {field_arguments, 2},
    {field_name, 1},
  [11] =
    {field_expression, 1},
  [12] =
    {field_name, 0},
    {field_value, 2},
  [14] =
    {field_default_value, 2},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 16,
  [51] = 14,
  [52] = 19,
  [53] = 17,
  [54] = 8,
  [55] = 9,
  [56] = 10,
  [57] = 11,
  [58] = 7,
  [59] = 13,
  [60] = 20,
  [61] = 12,
  [62] = 15,
  [63] = 21,
  [64] = 6,
  [65] = 18,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 70,
  [72] = 72,
  [73] = 69,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 76,
  [80] = 80,
  [81] = 75,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 86,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 88,
  [95] = 82,
  [96] = 83,
  [97] = 97,
  [98] = 91,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 99,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 114,
  [122] = 122,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\''
      ? (c < '"'
        ? c == '\n'
        : c <= '"')
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 'y') ADVANCE(45);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(109);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(109);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 20:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 30:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(45);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 'y') ADVANCE(45);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '$') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(108);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(45);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_emit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_stop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__triple_quoted_string_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__triple_quoted_string_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__triple_quoted_string_token1);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(99);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(103);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__formatstring_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__formatstring_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__formatstring_token1);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_init);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_fini);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_empty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_spin_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_yield);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_divert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 30},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 30},
  [26] = {.lex_state = 30},
  [27] = {.lex_state = 30},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 30},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 30},
  [33] = {.lex_state = 30},
  [34] = {.lex_state = 30},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 30},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 30},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 30},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 13},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_emit] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [sym_stop] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_fini] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [sym_spin_statement] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_divert] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(113),
    [sym__statement] = STATE(4),
    [sym__simple_statement] = STATE(4),
    [sym__compound_statement] = STATE(4),
    [sym_expression_statement] = STATE(4),
    [sym__expression] = STATE(25),
    [sym_variable_assignment] = STATE(4),
    [sym_variable] = STATE(26),
    [sym_selector_expression] = STATE(25),
    [sym_function_call] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_return_statement] = STATE(4),
    [sym_emit_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym__triple_quoted_string] = STATE(14),
    [sym__double_quoted_string] = STATE(14),
    [sym__single_quoted_string] = STATE(14),
    [sym_string] = STATE(18),
    [sym__formatstring] = STATE(14),
    [sym_initblock] = STATE(4),
    [sym_finiblock] = STATE(4),
    [sym_emptyblock] = STATE(4),
    [sym_yield_statement] = STATE(4),
    [sym_divert_statement] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_emit] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(33),
    [anon_sym_fini] = ACTIONS(35),
    [anon_sym_empty] = ACTIONS(37),
    [sym_spin_statement] = ACTIONS(39),
    [anon_sym_yield] = ACTIONS(41),
    [anon_sym_divert] = ACTIONS(43),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(25),
    [sym_variable_assignment] = STATE(2),
    [sym_variable] = STATE(26),
    [sym_selector_expression] = STATE(25),
    [sym_function_call] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_return_statement] = STATE(2),
    [sym_emit_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym__triple_quoted_string] = STATE(14),
    [sym__double_quoted_string] = STATE(14),
    [sym__single_quoted_string] = STATE(14),
    [sym_string] = STATE(18),
    [sym__formatstring] = STATE(14),
    [sym_initblock] = STATE(2),
    [sym_finiblock] = STATE(2),
    [sym_emptyblock] = STATE(2),
    [sym_yield_statement] = STATE(2),
    [sym_divert_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(50),
    [sym_integer] = ACTIONS(53),
    [sym_float] = ACTIONS(56),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_emit] = ACTIONS(62),
    [anon_sym_break] = ACTIONS(65),
    [anon_sym_continue] = ACTIONS(68),
    [anon_sym_function] = ACTIONS(71),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(86),
    [anon_sym_fini] = ACTIONS(89),
    [anon_sym_empty] = ACTIONS(92),
    [sym_spin_statement] = ACTIONS(95),
    [anon_sym_yield] = ACTIONS(98),
    [anon_sym_divert] = ACTIONS(101),
  },
  [3] = {
    [sym__statement] = STATE(5),
    [sym__simple_statement] = STATE(5),
    [sym__compound_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym__expression] = STATE(25),
    [sym_variable_assignment] = STATE(5),
    [sym_variable] = STATE(26),
    [sym_selector_expression] = STATE(25),
    [sym_function_call] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_return_statement] = STATE(5),
    [sym_emit_statement] = STATE(5),
    [sym_break_statement] = STATE(5),
    [sym_continue_statement] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym__triple_quoted_string] = STATE(14),
    [sym__double_quoted_string] = STATE(14),
    [sym__single_quoted_string] = STATE(14),
    [sym_string] = STATE(18),
    [sym__formatstring] = STATE(14),
    [sym_initblock] = STATE(5),
    [sym_finiblock] = STATE(5),
    [sym_emptyblock] = STATE(5),
    [sym_yield_statement] = STATE(5),
    [sym_divert_statement] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_emit] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(33),
    [anon_sym_fini] = ACTIONS(35),
    [anon_sym_empty] = ACTIONS(37),
    [sym_spin_statement] = ACTIONS(106),
    [anon_sym_yield] = ACTIONS(41),
    [anon_sym_divert] = ACTIONS(43),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(25),
    [sym_variable_assignment] = STATE(2),
    [sym_variable] = STATE(26),
    [sym_selector_expression] = STATE(25),
    [sym_function_call] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_return_statement] = STATE(2),
    [sym_emit_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym__triple_quoted_string] = STATE(14),
    [sym__double_quoted_string] = STATE(14),
    [sym__single_quoted_string] = STATE(14),
    [sym_string] = STATE(18),
    [sym__formatstring] = STATE(14),
    [sym_initblock] = STATE(2),
    [sym_finiblock] = STATE(2),
    [sym_emptyblock] = STATE(2),
    [sym_yield_statement] = STATE(2),
    [sym_divert_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_emit] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(33),
    [anon_sym_fini] = ACTIONS(35),
    [anon_sym_empty] = ACTIONS(37),
    [sym_spin_statement] = ACTIONS(110),
    [anon_sym_yield] = ACTIONS(41),
    [anon_sym_divert] = ACTIONS(43),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(25),
    [sym_variable_assignment] = STATE(2),
    [sym_variable] = STATE(26),
    [sym_selector_expression] = STATE(25),
    [sym_function_call] = STATE(25),
    [sym_literal] = STATE(25),
    [sym_return_statement] = STATE(2),
    [sym_emit_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym__triple_quoted_string] = STATE(14),
    [sym__double_quoted_string] = STATE(14),
    [sym__single_quoted_string] = STATE(14),
    [sym_string] = STATE(18),
    [sym__formatstring] = STATE(14),
    [sym_initblock] = STATE(2),
    [sym_finiblock] = STATE(2),
    [sym_emptyblock] = STATE(2),
    [sym_yield_statement] = STATE(2),
    [sym_divert_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_emit] = ACTIONS(17),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(33),
    [anon_sym_fini] = ACTIONS(35),
    [anon_sym_empty] = ACTIONS(37),
    [sym_spin_statement] = ACTIONS(110),
    [anon_sym_yield] = ACTIONS(41),
    [anon_sym_divert] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 12,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(116), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [34] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(120), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [67] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(124), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(128), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(132), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(136), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(140), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(144), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(148), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(152), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(156), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(160), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(164), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(168), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(172), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(176), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [529] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(180), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [567] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(188), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(192), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(196), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_EQ,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(202), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [715] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(204), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(206), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(210), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [782] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_string,
    STATE(89), 1,
      sym_argument,
    STATE(110), 1,
      sym_keyword_argument,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(66), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(218), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [864] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(212), 1,
      sym_identifier,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_string,
    STATE(86), 1,
      sym_argument,
    STATE(110), 1,
      sym_keyword_argument,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(66), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(224), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(228), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(232), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [1004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(236), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(240), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [1062] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(242), 1,
      anon_sym_DOT,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_string,
    STATE(60), 1,
      sym_arguments,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(23), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(248), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [1144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(252), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [1173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
    ACTIONS(256), 14,
      sym_identifier,
      sym_integer,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [1202] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(212), 1,
      sym_identifier,
    STATE(18), 1,
      sym_string,
    STATE(109), 1,
      sym_argument,
    STATE(110), 1,
      sym_keyword_argument,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(66), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1252] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_string,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(80), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1299] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    STATE(18), 1,
      sym_string,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(67), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1343] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(18), 1,
      sym_string,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(78), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1387] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    STATE(18), 1,
      sym_string,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(27), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1431] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    STATE(18), 1,
      sym_string,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(22), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1475] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    STATE(18), 1,
      sym_string,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(74), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1519] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      sym_float,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    STATE(18), 1,
      sym_string,
    STATE(14), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(24), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1563] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_DOLLAR,
    ACTIONS(266), 1,
      sym_integer,
    ACTIONS(268), 1,
      sym_float,
    ACTIONS(270), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
    STATE(65), 1,
      sym_string,
    STATE(51), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(37), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(154), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(146), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(166), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(158), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(122), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(126), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(130), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(134), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(118), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(142), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(170), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(138), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(150), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(174), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(114), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      sym_identifier,
      sym_integer,
      anon_sym_SQUOTE,
    ACTIONS(162), 7,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_float,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_EQ,
    ACTIONS(146), 4,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1942] = 5,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      anon_sym_BQUOTE,
    ACTIONS(288), 1,
      aux_sym__formatstring_token1,
    ACTIONS(290), 1,
      sym_comment,
    STATE(72), 2,
      sym_interpolation,
      aux_sym__formatstring_repeat1,
  [1959] = 5,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_BQUOTE,
    ACTIONS(294), 1,
      aux_sym__formatstring_token1,
    STATE(69), 2,
      sym_interpolation,
      aux_sym__formatstring_repeat1,
  [1976] = 5,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_BQUOTE,
    ACTIONS(298), 1,
      aux_sym__formatstring_token1,
    STATE(73), 2,
      sym_interpolation,
      aux_sym__formatstring_repeat1,
  [1993] = 5,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_BQUOTE,
    ACTIONS(305), 1,
      aux_sym__formatstring_token1,
    STATE(72), 2,
      sym_interpolation,
      aux_sym__formatstring_repeat1,
  [2010] = 5,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      aux_sym__formatstring_token1,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_BQUOTE,
    STATE(72), 2,
      sym_interpolation,
      aux_sym__formatstring_repeat1,
  [2027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2044] = 5,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(316), 1,
      sym_escape_sequence,
    STATE(77), 1,
      aux_sym__double_quoted_string_repeat1,
  [2060] = 5,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(322), 1,
      sym_escape_sequence,
    STATE(75), 1,
      aux_sym__double_quoted_string_repeat1,
  [2076] = 5,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(329), 1,
      sym_escape_sequence,
    STATE(77), 1,
      aux_sym__double_quoted_string_repeat1,
  [2092] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_arguments,
  [2108] = 5,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(338), 1,
      sym_escape_sequence,
    STATE(81), 1,
      aux_sym__double_quoted_string_repeat1,
  [2124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_arguments,
  [2140] = 5,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(314), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(316), 1,
      sym_escape_sequence,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym__double_quoted_string_repeat1,
  [2156] = 4,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(346), 1,
      aux_sym__triple_quoted_string_token1,
    STATE(98), 1,
      aux_sym__triple_quoted_string_repeat1,
  [2169] = 4,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym__triple_quoted_string_token1,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      aux_sym__triple_quoted_string_repeat1,
  [2182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_arguments_repeat1,
  [2195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_arguments_repeat1,
  [2208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_arguments_repeat1,
  [2221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_funcargs_repeat1,
  [2234] = 4,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym__triple_quoted_string_token1,
    ACTIONS(366), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      aux_sym__triple_quoted_string_repeat1,
  [2247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_arguments_repeat1,
  [2260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_arguments_repeat1,
  [2273] = 4,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(377), 1,
      aux_sym__triple_quoted_string_token1,
    STATE(99), 1,
      aux_sym__triple_quoted_string_repeat1,
  [2286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_EQ2,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_funcargs_repeat1,
  [2310] = 4,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym__triple_quoted_string_token1,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      aux_sym__triple_quoted_string_repeat1,
  [2323] = 4,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(392), 1,
      aux_sym__triple_quoted_string_token1,
    STATE(91), 1,
      aux_sym__triple_quoted_string_repeat1,
  [2336] = 4,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym__triple_quoted_string_token1,
    ACTIONS(396), 1,
      anon_sym_SQUOTE,
    STATE(94), 1,
      aux_sym__triple_quoted_string_repeat1,
  [2349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      sym_funcarg,
  [2362] = 4,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(377), 1,
      aux_sym__triple_quoted_string_token1,
    ACTIONS(402), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(99), 1,
      aux_sym__triple_quoted_string_repeat1,
  [2375] = 4,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(406), 1,
      aux_sym__triple_quoted_string_token1,
    STATE(99), 1,
      aux_sym__triple_quoted_string_repeat1,
  [2388] = 2,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym__formatstring_token1,
  [2397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [2408] = 4,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(411), 1,
      aux_sym__triple_quoted_string_token1,
    STATE(102), 1,
      aux_sym__triple_quoted_string_repeat1,
  [2421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_funcargs_repeat1,
  [2434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
  [2444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
  [2454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
  [2464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [2474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_funcargs,
  [2508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(108), 1,
      sym_funcarg,
  [2518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
  [2525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
  [2532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_identifier,
  [2539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_identifier,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
  [2553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_identifier,
  [2560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
  [2567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
  [2574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_identifier,
  [2581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 34,
  [SMALL_STATE(8)] = 67,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 166,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 232,
  [SMALL_STATE(14)] = 265,
  [SMALL_STATE(15)] = 298,
  [SMALL_STATE(16)] = 331,
  [SMALL_STATE(17)] = 364,
  [SMALL_STATE(18)] = 397,
  [SMALL_STATE(19)] = 430,
  [SMALL_STATE(20)] = 463,
  [SMALL_STATE(21)] = 496,
  [SMALL_STATE(22)] = 529,
  [SMALL_STATE(23)] = 567,
  [SMALL_STATE(24)] = 605,
  [SMALL_STATE(25)] = 643,
  [SMALL_STATE(26)] = 681,
  [SMALL_STATE(27)] = 715,
  [SMALL_STATE(28)] = 753,
  [SMALL_STATE(29)] = 782,
  [SMALL_STATE(30)] = 835,
  [SMALL_STATE(31)] = 864,
  [SMALL_STATE(32)] = 917,
  [SMALL_STATE(33)] = 946,
  [SMALL_STATE(34)] = 975,
  [SMALL_STATE(35)] = 1004,
  [SMALL_STATE(36)] = 1033,
  [SMALL_STATE(37)] = 1062,
  [SMALL_STATE(38)] = 1115,
  [SMALL_STATE(39)] = 1144,
  [SMALL_STATE(40)] = 1173,
  [SMALL_STATE(41)] = 1202,
  [SMALL_STATE(42)] = 1252,
  [SMALL_STATE(43)] = 1299,
  [SMALL_STATE(44)] = 1343,
  [SMALL_STATE(45)] = 1387,
  [SMALL_STATE(46)] = 1431,
  [SMALL_STATE(47)] = 1475,
  [SMALL_STATE(48)] = 1519,
  [SMALL_STATE(49)] = 1563,
  [SMALL_STATE(50)] = 1607,
  [SMALL_STATE(51)] = 1625,
  [SMALL_STATE(52)] = 1643,
  [SMALL_STATE(53)] = 1661,
  [SMALL_STATE(54)] = 1679,
  [SMALL_STATE(55)] = 1697,
  [SMALL_STATE(56)] = 1715,
  [SMALL_STATE(57)] = 1733,
  [SMALL_STATE(58)] = 1751,
  [SMALL_STATE(59)] = 1769,
  [SMALL_STATE(60)] = 1787,
  [SMALL_STATE(61)] = 1805,
  [SMALL_STATE(62)] = 1823,
  [SMALL_STATE(63)] = 1841,
  [SMALL_STATE(64)] = 1859,
  [SMALL_STATE(65)] = 1877,
  [SMALL_STATE(66)] = 1895,
  [SMALL_STATE(67)] = 1912,
  [SMALL_STATE(68)] = 1929,
  [SMALL_STATE(69)] = 1942,
  [SMALL_STATE(70)] = 1959,
  [SMALL_STATE(71)] = 1976,
  [SMALL_STATE(72)] = 1993,
  [SMALL_STATE(73)] = 2010,
  [SMALL_STATE(74)] = 2027,
  [SMALL_STATE(75)] = 2044,
  [SMALL_STATE(76)] = 2060,
  [SMALL_STATE(77)] = 2076,
  [SMALL_STATE(78)] = 2092,
  [SMALL_STATE(79)] = 2108,
  [SMALL_STATE(80)] = 2124,
  [SMALL_STATE(81)] = 2140,
  [SMALL_STATE(82)] = 2156,
  [SMALL_STATE(83)] = 2169,
  [SMALL_STATE(84)] = 2182,
  [SMALL_STATE(85)] = 2195,
  [SMALL_STATE(86)] = 2208,
  [SMALL_STATE(87)] = 2221,
  [SMALL_STATE(88)] = 2234,
  [SMALL_STATE(89)] = 2247,
  [SMALL_STATE(90)] = 2260,
  [SMALL_STATE(91)] = 2273,
  [SMALL_STATE(92)] = 2286,
  [SMALL_STATE(93)] = 2297,
  [SMALL_STATE(94)] = 2310,
  [SMALL_STATE(95)] = 2323,
  [SMALL_STATE(96)] = 2336,
  [SMALL_STATE(97)] = 2349,
  [SMALL_STATE(98)] = 2362,
  [SMALL_STATE(99)] = 2375,
  [SMALL_STATE(100)] = 2388,
  [SMALL_STATE(101)] = 2397,
  [SMALL_STATE(102)] = 2408,
  [SMALL_STATE(103)] = 2421,
  [SMALL_STATE(104)] = 2434,
  [SMALL_STATE(105)] = 2444,
  [SMALL_STATE(106)] = 2454,
  [SMALL_STATE(107)] = 2464,
  [SMALL_STATE(108)] = 2474,
  [SMALL_STATE(109)] = 2482,
  [SMALL_STATE(110)] = 2490,
  [SMALL_STATE(111)] = 2498,
  [SMALL_STATE(112)] = 2508,
  [SMALL_STATE(113)] = 2518,
  [SMALL_STATE(114)] = 2525,
  [SMALL_STATE(115)] = 2532,
  [SMALL_STATE(116)] = 2539,
  [SMALL_STATE(117)] = 2546,
  [SMALL_STATE(118)] = 2553,
  [SMALL_STATE(119)] = 2560,
  [SMALL_STATE(120)] = 2567,
  [SMALL_STATE(121)] = 2574,
  [SMALL_STATE(122)] = 2581,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted_string, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__formatstring, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__formatstring, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted_string, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__formatstring, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__formatstring, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quoted_string, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quoted_string, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted_string, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted_string, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quoted_string, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quoted_string, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, .production_id = 5),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 3, .production_id = 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert_statement, 3, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divert_statement, 3, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_statement, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield_statement, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emit_statement, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emit_statement, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 7),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 7),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emptyblock, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emptyblock, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initblock, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_initblock, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finiblock, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finiblock, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3, .production_id = 9),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__formatstring_repeat1, 2), SHIFT_REPEAT(44),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__formatstring_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__formatstring_repeat1, 2), SHIFT_REPEAT(72),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 3, .production_id = 10),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(77),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(77),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(41),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 1, .production_id = 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2), SHIFT_REPEAT(112),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__triple_quoted_string_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__triple_quoted_string_repeat1, 2), SHIFT_REPEAT(99),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 8),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__triple_quoted_string_repeat1, 2), SHIFT_REPEAT(102),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [420] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_storm(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
