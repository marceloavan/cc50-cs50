/****************************************************************************
 * binary.c
 *
 * CC50
 * Gabriel Lima Guimarães
 *
 * Mostra um número em binário.
 *
 * Demonstra operadores bitwise.
 ***************************************************************************/
       
#include <cs50.h>
#include <stdio.h>


int
main(void)
{
    // pega um número do usuário
    int n;
    do
    {
        printf("Inteiro não negativo por favor: ");
        n = GetInt();
    }
    while (n < 0);

    // imprime o número em binário
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
    {
        int mask = 1 << i;
        if (n & mask)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
