/****************************************************************************
 * f2c.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Converte Fahrenheits para Celsius
 *
 * Demonstra o uso de aritmética computacional
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    printf("Temperatura em F: ");
    float f = GetFloat();
    
    float c = 5 / 9 * (f - 32);
    
    printf("%.1f F = %.1f C\n", f, c);
}
