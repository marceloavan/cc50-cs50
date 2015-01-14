/****************************************************************************
 * toupper.c
 *
 * CC50
 * Gabriel Lima Guimarães
 *
 * Converte um char lowercase para uppercase.
 *
 * Demonstra operadores bitwise.
 ***************************************************************************/
       
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>


int
main(void)
{
    // pega um char minúsculo do usuário
    char c;
    do
    {
        printf("Caracter minúsculo por favor: ");
        c = GetChar();
    }
    while (c < 'a' || c > 'z');

    // imprime o char maiúsculo
    printf("%c\n", c & 0xdf);

    return 0;
}
