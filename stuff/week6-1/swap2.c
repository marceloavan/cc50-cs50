/****************************************************************************
 * swap2.c
 *
 * CC50
 * Gabriel Lima Guimarães
 *
 * Troca os valores de duas variáveis.
 *
 * Demonstra o uso inteligente de operadores bitwise.
 ***************************************************************************/
       
#include <stdio.h>


// protótipo da função
void swap(int *a, int *b);


int
main(void)
{
    int x = 1;
    int y = 2;

    printf("x é %d\n", x);
    printf("y é %d\n", y);
    printf("Trocando...\n");
    swap(&x, &y);
    printf("Trocado!\n");
    printf("x é %d\n", x);
    printf("y é %d\n", y);
}


/*
 * Troca os valores dos argumentos.
 */

void
swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
