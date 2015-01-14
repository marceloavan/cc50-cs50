/****************************************************************************
 * ascii2.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Imprime uma tabela ASCII melhor formatada
 * 
 ***************************************************************************/

#include <stdio.h>


int
main(int argc, char *argv[])
{
    // imprime tabela para todas as letras
    for (int i = 65; i < 65 + 26; i++)
        printf("%c  %d    %3d  %c\n", (char) i, i, i + 32, (char) (i + 32));
}

