/****************************************************************************
 * copy1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Falha ao tentar copiar uma string
 * Você pode encontrar o bug?
 ***************************************************************************/
       
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int
main(void)
{
    // pega linha de texto
    printf("Escreva algo: ");
    char *s1 = GetString();
    if (s1 == NULL)
        return 1;
 
    // tenta copiar a string
    char *s2 = s1;
 
    // muda a "cópia"
    printf("Capitalizando a cópia...\n");
    if (strlen(s2) > 0)
        s2[0] = toupper(s2[0]);

    // imprime o original e a "cópia"
    printf("Original: %s\n", s1);
    printf("Cópia:    %s\n", s2);
    
    return 0;
}
