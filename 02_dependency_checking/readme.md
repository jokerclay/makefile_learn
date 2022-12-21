# Dependency checking

- how `make` decide what to do ?
  (1). `make` notices commandline contains no targets, so it make the default gobal `count_words`

```makefile

default gobal========>check prerequisites
      ^                        |
      |                        V
#|----+-----| |----------------+-----------------|
#
#
#                 check if there is a rule to build  count_words.o
#               +------------------------------------------------+
#               |                                                |
#               |                                                |
count_words: count_words.o lexer.o -lfl                          |
	gcc count_words.o lexer.o -lfl -o count_words                |
                                                                 |
       +---------------------------------------------------------+
       |
       |<------------------------+
       V                         |
count_words.o: count_words.c     |
	gcc -c count_words.c         |
#   --------+-----------         |
#           |execuse this get .o |
#           +--------------------+


lexer.o: lexer.c
	gcc -c lexer.c


lexer.c: lexer.l
	flex -t lexer.l > lexer.c



```

- the chain to targets to prerequisites to targets to prerequisites is how make analyzes `makefile` and decide the commands

(2) next make need `lexer.o`, and `lexer.o` is produced by `lexer.c`
but there is no `lexer.c`
(3) But there is a rule to produce `lexer.c`, so it will run the command `flex -t lexer.l > lexer.c`, then, you got `lexer.c`

(4) finally, `make` examines `-lfl`, which means linking a library called `libfl.a`

- gun `make` support this sybtax, when `-l<SomeLibName>`, make will search for a file like this： `libSomeLibName.so`
  is not founded `libSomeLibName.so`, it will search `libSomeLibName.a`

(5) final action: linking.
