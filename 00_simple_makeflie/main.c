#include <stdio.h>
#include <stdlib.h>

 int main (int argc, char *argv[])
 {
    if (argc < 2) {
        printf("ERROR: NOT providing the right argument, please check again");
        exit(1);
    }

        printf("the first argument is %s", argv[1]);


    return 0;
 }
