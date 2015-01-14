/****************************************************************************
 * buggy1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Deveria imprimir 10 astericos mas não o faz!
 * Você consegue encontrar o problema?
 ***************************************************************************/

#include <stdio.h>

int
main(int argc, char *argv[])
{
    for (int i = 0; i <= 10; i++)
        printf("*");
}
