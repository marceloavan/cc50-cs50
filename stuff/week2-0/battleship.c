/****************************************************************************
 * battleship.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Imprime um tabuleiro de batalha naval.
 *
 * Demonstra nested loop.
 ***************************************************************************/

#include <stdio.h>


int
main(int argc, char *argv[])
{
    // imprime os números da primeira linha
    printf("\n   ");
    for (int i = 1; i <= 10; i++)
        printf("%d  ", i);
    printf("\n");

    // imprime linhas de buracos com letras no começo
    for (int i = 0; i < 10; i++)
    {
        printf("%c  ", 'A' + i);
        for (int j = 1; j <= 10; j++)
            printf("o  ");
        printf("\n");
    }
    printf("\n");
}
