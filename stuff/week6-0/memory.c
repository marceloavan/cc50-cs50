/****************************************************************************
 * memory.c
 *
 * CC50
 * Gabriel Lima Guimarães
 *
 * Demonstra erros relativos à memória.
 *
 * problema 1: heap block overrun
 * problem 2: memory leak -- x não foi liberado
 *
 * Adaptado de
 * http://valgrind.org/docs/manual/quick-start.html#quick-start.prepare.
 ***************************************************************************/
       
#include <stdlib.h>


void 
f(void)
{
    int *x = malloc(10 * sizeof(int));
    x[10] = 0;
}


int
main(void)
{
    f();
    return 0;
}
