/****************************************************************************
 * copy2.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Copia uma string.
 * 
 * Demonstra strings como ponteiros para chars.
 ***************************************************************************/
       
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int
main(void)
{
    // pega uma linha de texto
    printf("Escreva algo: ");
    char *s1 = GetString();
    if (s1 == NULL)
        return 1;
 
    // aloca espaço para a cópia
    char *s2 = malloc((strlen(s1) + 1) * sizeof(char));
    if (s2 == NULL)
        return 1;

    // copia a string
    int n = strlen(s1);
    for (int i = 0; i < n; i++)
        s2[i] = s1[i];
    s2[n] = '\0';

    // muda a cópia
    printf("Capitalizando cópia...\n");
    if (strlen(s2) > 0)
        s2[0] = toupper(s2[0]);

    // imprime o original e a cópia
    printf("Original: %s\n", s1);
    printf("Copy:     %s\n", s2);

    return 0;
}
