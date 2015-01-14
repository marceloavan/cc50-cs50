/****************************************************************************
 * conditions2.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Diz ao usuário se o seu input é positivo ou negativo
 *
 * Demonstra o uso da construção if-else if-else
 ***************************************************************************/
       
#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    printf("Um inteiro por favor: ");
    int n = GetInt();

    if (n > 0)
        printf("Você escolheu um número positivo!\n");
    else if (n == 0)
        printf("Você escolheu zero!\n");
    else
        printf("Você escolheu um número negativo!\n");
}
