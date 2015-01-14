/****************************************************************************
 * sigma1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Adiciona os números de 1 até n;
 *
 * Demonstra recursão.
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
    // caso básico
    if (m <= 0)
        return 0;

    // caso recursivo
    else
        return (m + sigma(m-1));
}

