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
    printf("Qual é a sua nota? ");
    char note = GetChar();

    switch (note)
    {
        case 'A':
        case 'a':
            printf("Você teve uma ótima nota!\n");
            break;

        case 'B':
        case 'b':
            printf("Você teve uma nota boa.\n");
            break;

        case 'C':
        case 'c':
            printf("Você teve uma nota média.\n");
            break;

		case 'D':
        case 'd':
            printf("Você teve uma nota ruim.\n");
            break;

		case 'E':
        case 'e':
            printf("Essa é a nota que você vai tirar no CC50 se não entender o funcionameto desse programa!\n");
            break;
			
        default:
           printf("Você escolheu um número inválido.\n");
    }
}

