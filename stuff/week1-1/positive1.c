/****************************************************************************
 * positive1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Pede ao usuário um número positivo
 *
 * Demonstra o uso de do-while
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    int n;
    do
    {
        printf("Eu ordeno que você me dê um inteiro positivo: ");
        n = GetInt();
    }
    while (n < 1);
    printf("Obrigado pelo %d!\n", n);
}
