/****************************************************************************
 * compare1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Falha ao tentar comparar duas strings
 * Você pode encontrar o bug?
 ***************************************************************************/
       
#include <cs50.h>
#include <stdio.h>


int
main(void)
{
    // pega linha de texto
    printf("Escreva algo: ");
    string s1 = GetString();
 
    // pega outra linha de texto
    printf("Escreva algo: ");
    string s2 = GetString();
 
    // tenta comparar as duas strings
    if (s1 == s2)
        printf("Você escreveu a mesma coisa!\n");
    else
        printf("Você escreveu coisas diferentes!\n");
    
    return 0;
}
