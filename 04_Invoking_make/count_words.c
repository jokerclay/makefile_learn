#include <stdio.h>
#include <stdlib.h>


extern int fee_count ,fie_count,foe_count , fum_count ;
extern int yylex(void);

int main (int argc, char *argv[])
{

    yylex();
    printf("fee has appears for %d times\n", fee_count);
    printf("fie has appears for %d times\n", fie_count);
    printf("foe has appears for %d times\n", foe_count);
    printf("fum has appears for %d times\n", fum_count);

    exit(0);

    return 0;
}
