/****************************************************************************
 * positive2.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Pede ao usuário um número positivo
 *
 * Demonstra o uso de bool
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    bool agradecido = false;
    do
    {
        printf("Eu ordeno que você me dê um inteiro positivo: ");
        if (GetInt() > 0)
            agradecido = true;
    }
    while (agradecido == false);
    printf("Obrigado pelo inteiro positivo!\n");
}
