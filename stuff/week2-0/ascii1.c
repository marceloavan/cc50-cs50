/****************************************************************************
 * ascii1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Imprime uma tabela ASCII
 *
 * Demonstra casting de int para char.
 ***************************************************************************/

#include <stdio.h>


int
main(int argc, char *argv[])
{
    // imprime tabela para letras uppercase
    for (int i = 65; i < 65 + 26; i++)
        printf("%c: %d\n", (char) i, i);

    // separa uppercase de lowercase
    printf("\n");

    // imprime tabela para letras lowercase
    for (int i = 97; i < 97 + 26; i++)
        printf("%c: %d\n", (char) i, i);
}

