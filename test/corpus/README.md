# Tree-sitter Storm Test Corpus

This directory contains the test corpus for the tree-sitter Storm grammar. The tests are organized into logical categories and aligned with Vertex's official Storm language specification.

## Test Organization

### Core Language Features

- **literals.txt** (6 tests) - Basic literals and data types
  - Comments (single-line and multi-line)
  - String literals (double-quoted, single-quoted, triple-quoted, template strings)
  - Boolean and null literals
  - Lists and arrays
  - Function definitions and calls

- **declarations.txt** (3 tests) - Variable and function declarations
  - Single variable assignments
  - Multiple variable assignments (tuple unpacking)
  - Function declarations with parameters and defaults

- **expressions.txt** (3 tests) - Operators and expressions
  - Arithmetic expressions (+, -, *, /, %, **)
  - Boolean expressions (and, or, not)
  - Unary expressions (-, +, not)
  - Comparison operators (<, >, <=, >=, !=, ~=, ^=)

### Control Flow

- **control_flow.txt** (5 tests) - Control flow statements
  - If/elif/else statements
  - For loops (single variable and tuple unpacking)
  - While loops
  - Switch/case statements with default case
  - Try/catch blocks

- **statements.txt** (17 tests) - Flow control statements
  - Return statements (with value, variable, empty, expression)
  - Emit statements
  - Break and continue statements
  - Yield statements
  - Divert statements
  - Spin statements

- **blocks.txt** (12 tests) - Special block types
  - Init blocks (initialization)
  - Fini blocks (finalization)
  - Empty blocks (executed when no results)
  - Subqueries (with and without yield keyword)
  - Nested subqueries

### Storm-Specific Features

- **properties.txt** (3 tests) - Storm property syntax
  - Full properties: `inet:ipv4`, `inet:ipv4:asn`
  - Relative properties: `:ipv4`, `:fqdn`, `:$var`
  - Universal properties: `.$var`

- **tags.txt** (3 tests) - Storm tag syntax
  - Simple tags: `#tagname`
  - Tags with segments: `#tag.segment.name`
  - Tag properties: `#tag:prop`, `#$var:prop`, `#tag:$var`

### Edge Cases and Robustness

- **edge_cases.txt** (28 tests) - Edge cases and boundary conditions
  - Unicode support in strings and comments
  - Escape sequences (\n, \t, \\)
  - Empty values (empty string, null, empty list, empty array)
  - Complex nested expressions and parentheses
  - Operator precedence and associativity
  - Negative numbers and floats
  - Unary operators on variables
  - Lists with trailing commas
  - Deeply nested structures
  - Mixed types in collections
  - Very long identifiers
  - Chained comparisons

## Test Count Summary

Total: **98 tests** across 9 files

| File | Tests | Description |
|------|-------|-------------|
| literals.txt | 6 | Basic data types and literals |
| declarations.txt | 3 | Variable and function declarations |
| expressions.txt | 3 | Operators and expressions |
| control_flow.txt | 5 | If/for/while/switch/try statements |
| statements.txt | 17 | Return/emit/break/continue/yield/divert/spin |
| blocks.txt | 12 | Init/fini/empty/subquery blocks |
| properties.txt | 3 | Full/relative/universal properties |
| tags.txt | 3 | Tags and tag properties |
| edge_cases.txt | 28 | Edge cases and boundary conditions |
| vertex_reference.txt | 18 | Examples from Vertex official tests |

## Reference

These tests are aligned with Vertex's official Storm grammar tests from the Synapse repository:
- https://github.com/vertexproject/synapse/blob/master/synapse/tests/test_lib_grammar.py

### Current Coverage

**Implemented Features (Phases 1-3):**
- ✅ Variables, functions, expressions, operators
- ✅ Control flow: if/elif/else, for, while, switch, try/catch
- ✅ Statements: return, emit, break, continue, yield, divert, spin
- ✅ Blocks: init, fini, empty, subqueries
- ✅ Properties: full, relative, universal
- ✅ Tags with segments and properties
- ✅ Literals: strings, numbers, booleans, null, lists, arrays
- ✅ Edge cases: unicode, escaping, complex expressions

**Not Yet Implemented (Phase 4):**
- ❌ Edit blocks: `[ inet:ipv4=1.2.3.4 ]`
- ❌ Graph navigation (pivots): `->`, `<-`
- ❌ Filters: `+{condition}`, `-{condition}`
- ❌ Commands and pipes: `| limit 10`, `| uniq`

## Adding New Tests

When adding new tests, follow this format (each test starts with 80 equals signs):

```
80 equals signs: ========================================================================
Test Name (descriptive, in Title Case)
80 equals signs again

[Storm code to test]

80 dashes: --------------------------------------------------------------------------

(source_file
  [expected syntax tree in s-expression format])
```

### Best Practices

1. **One feature per test** - Keep tests focused on a single language feature
2. **Clear test names** - Use descriptive names that explain what's being tested
3. **Use realistic examples** - Write code that resembles actual Storm usage
4. **Verify tree structure** - Use `npx tree-sitter parse <file>` to generate expected trees
5. **Group related tests** - Place tests in the appropriate category file

### Running Tests

```bash
# Build the parser
npm run build

# Run all tests
npm test

# Parse a specific file to see the syntax tree
npx tree-sitter parse test_file.storm
```

## Known Limitations

### Parser Behavior Notes

1. **Parentheses as Lists**: Single-element parentheses like `(expr)` are parsed as lists, not grouping expressions. This is intentional to maintain consistency with Storm's syntax.

2. **Return Statement Syntax**: The `return` statement requires no space between `return` and the parentheses: `return()` not `return ()`.

3. **Negative Numbers**: Negative numbers like `-42` are parsed as integer literals, not as unary expressions applied to positive numbers.

4. **Comparison Operators**: The grammar currently doesn't support `=` as a comparison operator in expressions (only assignment). Use `!=`, `~=`, or `^=` for comparisons, or comparison operators like `<`, `>`, `<=`, `>=`.

## Future Work

When Phase 4 features are implemented, add tests for:
- Edit blocks and node creation/modification
- Pivot operations and graph traversal
- Filter expressions
- Command syntax and piping
- Storm query composition

## Contributing

When updating the grammar, ensure all tests still pass. If the grammar changes require test updates, document the reason in the commit message and update this README accordingly.
