/****************************************************************************
 * argv1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Imprime argumentos de linha de comando, um por linha.
 *
 * Demonstra o uso de argv.
 ***************************************************************************/

#include <stdio.h>


int
main(int argc, char *argv[])
{
    // imprime argumentos
    for (int i = 0; i < argc; i++)
        printf("%s\n", argv[i]);
}
