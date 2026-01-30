# tree-sitter-storm

Storm grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## About Storm

Storm is the query language for the [Synapse](https://github.com/vertexproject/synapse) Threat Intelligence Platform by [Vertex Project](https://vertex.link/). Storm enables powerful data model queries, graph traversal, data manipulation, and automation.

**Official Storm Documentation:**

- [Storm Reference Guide](https://synapse.docs.vertex.link/en/latest/synapse/userguides/storm_ref_intro.html)
- [Synapse Repository](https://github.com/vertexproject/synapse)

## Features

This tree-sitter grammar currently supports a subset of the Storm language features:

- ✅ **Core Language**: Variables, functions, expressions, operators
- ✅ **Control Flow**: `if`/`elif`/`else`, `for`, `while`, `switch`, `try`/`catch`
- ✅ **Statements**: `return`, `emit`, `break`, `continue`, `yield`, `divert`, `spin`
- ✅ **Special Blocks**: `init`, `fini`, `empty`, subqueries
- ✅ **Storm Properties**: Full (`inet:ipv4`), relative (`:asn`), universal (`.$var`)
- ✅ **Tags**: Simple tags (`#foo`), segments (`#foo.bar`), properties (`#foo:prop`)
- ✅ **Literals**: Strings, numbers, booleans, null, lists, arrays
- ✅ **Syntax Highlighting**: Complete support via tree-sitter queries

**Missing features:**

- ⏳ Edit blocks: `[ inet:ipv4=1.2.3.4 ]`
- ⏳ Pivots: `->`, `<-` (graph navigation)
- ⏳ Filters: `+{condition}`, `-{condition}`
- ⏳ Commands and pipes: `| limit 10`, `| uniq`

## Contributing

Contributions are welcome! Please feel free to submit issues or pull requests.

### Adding Features

If you'd like to help implement Phase 4 features:

1. Check [test/corpus/README.md](test/corpus/README.md) for feature status
2. Reference the [official Storm grammar](https://github.com/vertexproject/synapse/tree/master/synapse/data/lark)
3. Add tests first, then implement grammar rules
4. Update syntax highlighting queries

## Acknowledgments

- Storm language designed by [Vertex Project](https://vertex.link/)
- Built with [tree-sitter](https://github.com/tree-sitter/tree-sitter) by Max Brunsfeld
- Grammar structure inspired by [tree-sitter-python](https://github.com/tree-sitter/tree-sitter-python)

---

**Note:** This is an independent tree-sitter implementation and is not officially affiliated with Vertex Project or Synapse.
