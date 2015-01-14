/****************************************************************************
 * switch1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Julga o tamanho do input de um usuário
 *
 * Demonstra o uso de switchs
 ***************************************************************************/
       
#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    printf("Me dê um inteiro entre 1 e 10: ");
    int n = GetInt();

    switch (n)
    {
        case 1:
        case 2:
        case 3:
            printf("Você escolheu um número pequeno.\n");
            break;

        case 4:
        case 5:
        case 6:
            printf("Você escolheu um número médio.\n");
            break;

        case 7:
        case 8:
        case 9:
        case 10:
            printf("Você escolheu um número grande.\n");
            break;

        default:
           printf("Você escolheu um número inválido.\n");
    }
}
