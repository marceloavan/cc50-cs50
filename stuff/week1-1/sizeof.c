/****************************************************************************
 * sizeof.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Reporta os tamanhos das estruturas de dados primitivas de C
 *
 * Demonstra o uso de sizeof
 ***************************************************************************/

#include <stdio.h>

int
main(void)
{
    char c;
    double d;
    float f;
    int i;

    printf("char: %d\n", sizeof(c));
    printf("double: %d\n", sizeof(d));
    printf("float: %d\n", sizeof(f));
    printf("int: %d\n", sizeof(i));
}
