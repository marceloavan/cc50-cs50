/****************************************************************************
 * return2.c
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
int cube(int a);


int
main(void)
{
    int x = 2;
    printf("x é %d agora\n", x);
    printf("Elevando ao cubo...\n");
    x = cube(x);
    printf("Elevado ao cubo!\n");
    printf("x é %d agora\n", x);
}


/*
 * Retorna argumento ao cubo.
 */

int
cube(int a)
{
    return a * a * a;
}
