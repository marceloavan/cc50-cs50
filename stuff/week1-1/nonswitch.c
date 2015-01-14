/****************************************************************************
 * nonswitch.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Julga o tamanho do input do usuário
 *
 * Demonstra o uso de expressões booleanas com AND.
 ***************************************************************************/
       
#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    printf("Me dê um inteiro entre 1 e 10: ");
    int n = GetInt();

    if (n >= 1 && n <= 3)
        printf("Você escolheu um número pequeno.\n");
    else if (n >= 4 && n <= 6)
        printf("Você escolheu um número médio.\n");
    else if (n >= 7 && n <= 10)
        printf("Você escolheu um número grande.\n");
    else 
        printf("Você escolheu um número inválido.\n");
}
