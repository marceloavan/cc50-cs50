/****************************************************************************
 * hai3.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Fala oi para qualquer um
 *
 * Demonstra o uso de inputs da Biblioteca do CC50
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>

int
main(void)
{
    printf("Diga o seu nome: ");
    string name = GetString();
    printf("O hai, %s!\n", name);
}
