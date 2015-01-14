/****************************************************************************
 * buggy4.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Deveria incrementar uma variável mas não o faz!
 * Você pode encontrar o bug?
 ***************************************************************************/

#include <stdio.h>


// protótipo da função
void increment(int x);


int
main(void)
{
    int x = 1;
    printf("x é %d agora\n", x);
    printf("Incrementando..\n");
    increment(x);
    printf("Incrementado!\n");
    printf("x é %d agora\n", x);
}


/*
 * Tenta incrementar x.
 */

void
increment(int x)
{
    x++;
}
