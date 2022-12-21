# combine files in makefile

```makefile

count_words: count_words.o lexer.o -lfl
	gcc count_words.o lexer.o -lfl -o count_words

count_words.o: count_words.c
	gcc -c count_words.c

lexer.o: lexer.c
	gcc -c lexer.c




################################################
#
# flex is A fast scanner generator
#
# * more info: https://www.cs.princeton.edu/~appel/modern/c/software/flex/flex.htmlkk
#
# * you may want to see a video on youtube
# https://www.youtube.com/watch?v=LpVufkH4gog
#
# * basiclly speaking
#
# +----------+  flex +----------+   gcc  +-----------+
# |  lex.l   | ----> |  lex.c   |  ----> |executeable|
# +----------+       +----------+        +-----------+
#
################################################
lexer.c: lexer.l
	flex -t lexer.l > lexer.c

```
