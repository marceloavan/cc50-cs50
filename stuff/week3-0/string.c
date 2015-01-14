/****************************************************************************
 * string.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Imprime uma string dava, um caracter por linha.
 *
 * Demonstra o uso de strings como arrays e de strlen.
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>
#include <string.h>


int
main(void)
{
    // pega uma string
    string s = GetString();

    // imprime a string um caracter por linha
    if (s != NULL)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            char c = s[i];
            printf("%c\n", c);
        }
    }
}
