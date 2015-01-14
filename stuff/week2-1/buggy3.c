/****************************************************************************
 * buggy3.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Deveria inverter o valor de duas variáveis mas não o faz!
 * Você pode encontrar o bug?
 ***************************************************************************/

#include <stdio.h>


// protótipo da função
void swap(int a, int b);


int
main(void)
{
    int x = 1;
    int y = 2;

    printf("x é %d\n", x);
    printf("y é %d\n", y);
    printf("Trocando...\n");
    swap(x, y);
    printf("Trocado!\n");
    printf("x é %d\n", x);
    printf("y é %d\n", y);
}


/*
 * Inverte os valores dos argumentos.
 */

void
swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
