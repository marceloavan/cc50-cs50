/****************************************************************************
 * sigma1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Adiciona os números de 1 até n;
 *
 * Demonstra iteração.
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>


// protótipo
int sigma(int);


int
main(void)
{
    // pede inteiro positivo ao usuário
    int n;
    do
    {
        printf("Inteiro positivo por favor: ");
        n = GetInt();
    }
    while (n < 1);

    // computa a soma de 1 até n
    int answer = sigma(n);

    // reporta a resposta
    printf("%d\n", answer);
}


/*
 * Retorna a soma de 1 até n; retorna 0 n não for positivo.
 */

int
sigma(int m)
{
    // exclui a possibilidade de loop infinito
    if (m < 1)
        return 0;

    // faz e retorna a soma
    int sum = 0;
    for (int i = 1; i <= m; i++)
        sum += i;
    return sum;
}

