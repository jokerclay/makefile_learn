# Invoking make

- not in every dirtory can use `make` command, we need 3 conditions that make sure `make` works

  1. all the project source code and `makefile` in a dirtory
  2. `make` description file is called `makefile` | `Makefile` | `GUNMakefile`
  3. executing the `make` command in the same dirtory where `makefile` stays

- if all the file is the newest version, invoking `make` will print

```txt
make: 'count_words' is up to date.
```

- if in the dirtory where you executing `make`,and that dirtory don't have `make` description file, which is `makefile`, invoking `make` will print

```txt
make: *** No targets specified and no makefile found.  Stop.
```

- and there is some useful option that provide for make
  like `--just-print` or `-n` : it will just print out the command it will to execute, but not acctually execute it
  it also can set variable to override the default value in the `makefile`

  - it not execute it, just print it.

  ```txt
  $ make -B  -n
  gcc -c count_words.c
  flex -t lexer.l > lexer.c
  gcc -c lexer.c
  gcc count_words.o lexer.o -lfl -o count_words
  ```
