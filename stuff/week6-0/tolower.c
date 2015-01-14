/****************************************************************************
 * tolower.c
 *
 * CC50
 * Gabriel Lima Guimarães
 *
 * Converte um char de uppercase para lowercase.
 *
 * Demonstra operadores bitwise.
 ***************************************************************************/
       
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>


int
main(void)
{
    // pega um char maiúsculo do usuário
    char c;
    do
    {
        printf("Caracter maiúsculo por favor: ");
        c = GetChar();
    }
    while (c < 'A' || c > 'Z');

    // imprime o char minúsculo
    printf("%c\n", c & 0x20);

    return 0;
}
