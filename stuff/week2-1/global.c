/****************************************************************************
 * global.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Incrementa variáveis.
 *
 * Demonstra o uso de variáveis globais e escopo.
 ***************************************************************************/

#include <stdio.h>


// variável global
int x;

// protótipo da função
void increment(void);


int
main(void)
{
    printf("x é %d agora\n", x);
    printf("Inicializando...\n");
    x = 1;
    printf("Inicializado!\n");
    printf("x é %d agora\n", x);
    printf("Incrementando...\n");
    increment();
    printf("Incrementado!\n");
    printf("x é %d agora\n", x);
}


/*
 * Incrementa x.
 */

void
increment(void)
{
    x++;
}
