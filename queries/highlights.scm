(variable) @variable

; Global variables
(variable
   name: (identifier) @variable.builtin
  (#any-of? @variable.builtin
    "lib"
    "node"
    "path"
    "tag"
    "rows"
))

(funcarg
  name: (identifier) @variable.parameter
)

(string) @string
(integer) @number
(float) @number.float
(boolean) @boolean
(null) @constant.builtin

(escape_sequence) @string.escape

(interpolation
  "{" @punctuation.special
  "}" @punctuation.special) @embedded

; Function definitions
(function_definition
  name: (identifier) @function)

; ; Function calls
(function_call
  name: (variable) @function.call)

(argument) @variable.parameter

; Builtin functions
; (function_call
;   name: (attribute_reference
;     object: (variable) @module
;     attribute: (identifier) @function.call
;     )
;   (#eq? @module "$lib")
; )

(selector_expression attribute: (identifier) @property)

(function_call
  name: (selector_expression
    attribute: (identifier) @function.method.call
  )
)

; Storm properties
(full_property) @property
(relative_property) @property
(universal_property) @property

; Storm tags
(tag) @tag
(tag_property) @tag
(tag_property_simple) @tag

; Operators

[
  "and"
  "or"
  "not"
] @keyword.operator

[
  "+"
  "-"
  "*"
  "/"
  "%"
  "**"
  "<"
  ">"
  "<="
  ">="
  "!="
  "~="
  "^="
] @operator

[
  "$"
  ; "|"
] @operator

; Keywords

[
 "function"
] @keyword.function

[
  "return"
] @keyword.return

[
  "if"
  "elif"
  "else"
  "switch"
] @keyword.conditional

[
  "for"
  "while"
  "in"
] @keyword.repeat

[
  "break"
  "continue"
] @keyword.repeat

[
  "try"
  "catch"
  "as"
] @keyword.exception

[
  "init"
  "fini"
  "empty"
  "yield"
  "divert"
  "emit"
] @keyword

(spin_statement) @keyword

[
  "."
  ","
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

(comment) @comment @spell
