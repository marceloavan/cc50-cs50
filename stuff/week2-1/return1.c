/****************************************************************************
 * return1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Incrementa uma variável.
 *
 * Demonstra o uso de parâmetros e valores de retorno.
 ***************************************************************************/

#include <stdio.h>


// protótipo da função
int increment(int a);


int
main(void)
{
    int x = 2;
    printf("x é %d agora\n", x);
    printf("Incrementando...\n");
    x = increment(x);
    printf("Incrementado!\n");
    printf("x é %d agora\n", x);
}


/*
 * Retorna o argumento mais um.
 */

int
increment(int a)
{
    return a + 1;
}
