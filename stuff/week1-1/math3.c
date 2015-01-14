/****************************************************************************
 * math3.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Computa e imprime uma operação com floats.
 *
 * Demonstra uma perda de precisão
 ***************************************************************************/

#include <stdio.h>

int
main(void)
{
    float answer = 17 / 13;
    printf("%.2f\n", answer);
}
