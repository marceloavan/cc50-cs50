/****************************************************************************
 * argv2.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Imprime argumentos de linha de comando, letra por letra.
 *
 * Demonstra argv como array bidimensional.
 ***************************************************************************/

#include <stdio.h>
#include <string.h>


int
main(int argc, char *argv[])
{
    // imprime argumentos
    for (int i = 0; i < argc; i++)
    {
    	// imprime todas as letras de um argumento
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
            printf("%c\n", argv[i][j]);
        printf("\n");
    }
}
