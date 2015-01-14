/****************************************************************************
 * bar.c
 *
 * CC50
 * Gabriel Guimarães
 *
 * Vamos brincar com ponteiros usando o GDB?
 ***************************************************************************/

#include <stdio.h>


int foo(int n);
void bar(int m);

int
main(void)
{
    int a;
    char * s = "hello, world";
    printf("%s\n", &s[7]);
    a = 5;
    foo(a);
    return 0;
}

int
foo(int n)
{
    int b;
    b = n;
    b *= 2;
    bar(b);
    return b;
}

void
bar(int m)
{
    char * hi = "Hi, I'm bar!\n";
    printf("%s", hi);
}
