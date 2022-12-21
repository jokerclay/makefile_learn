# Minimizing Rebuilds

```text
$ make &&  ./count_words
make: 'count_words' is up to date.
testing
testing
aaa
aaa
bbb
bbb
fee

fee

fee has appears for  2 times
fie has appears for  0 times
foe has appears for  0 times
fum has appears for  0 times

```

- as you can see this program also print out what we have typed in, that not what we want, so we add "any character" `.` to `lexer.l` file. To solve this problem.

- before we change the `lexer.l` file, and compile it

```txt
$ make
gcc -c count_words.c
flex -t lexer.l > lexer.c
gcc -c lexer.c
gcc count_words.o lexer.o -lfl -o count_words
```

- after we added `.` to the `lexer.l` file, and recompile it

```txt
$ make
flex -t lexer.l > lexer.c
gcc -c lexer.c
gcc count_words.o lexer.o -lfl -o count_words

```

- as you can see, it not recompile everything, it just recompile what have been changed,

- after we added `.` to the `lexer.l` file, and recompile it, it just repuduce the `lexer.c` file, and `count_words.c` stay what it was

* and the program will be look like this

```txt
$ make &&  ./count_words
make: 'count_words' is up to date.
fee

fee

fdsa

fdasf

fdas

fee has appears for  2 times
fie has appears for  0 times
foe has appears for  0 times
fum has appears for  0 times

```
