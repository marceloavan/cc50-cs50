/****************************************************************************
 * ascii3.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Imprime uma tabela ASCII
 * 
 * Demonstra iteração com um char
 ***************************************************************************/

#include <stdio.h>


int
main(int argc, char *argv[])
{
    // imprime tabela para letras uppercase
    for (char c = 'A'; c <= 'Z'; c = (char) ((int) c + 1))
        printf("%c: %d\n", c, (int) c);
}
