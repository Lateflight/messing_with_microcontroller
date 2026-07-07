//DAY TWO: Bitwise
//I was supposed to do one for yesterday but oh well :P

#include <stdio.h>
int main(void){


    char a = 0b0;
    char b = ~a;
    printf("%b\n",b);

    printf("%b\n",b|a);
    printf("%b\n",~(b ^ a));
}