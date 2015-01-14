/****************************************************************************
 * beer2.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Canta a música das 99 garrafas de cerveja.
 *
 * Demonstra loop while.
 ***************************************************************************/

#include <stdio.h>
#include <cc50.h>

int
main(int argc, char *argv[])
{
    // pergunta um número ao usuário
    printf("Quantas garrafas de cerveja? ");
    int n = GetInt();

    // para se input for inválido
    if (n < 1)
    {
        printf("Desculpe, isso não faz sentido.\n");
        return 1;
    }

    // canta a música chata
    printf("\n");
    while (n > 0)
    {
    	// utiliza gramática apropriada
        string s1 = (n == 1) ? "garrafa" : "garrafas";
        string s2 = (n == 2) ? "garrafa" : "garrafas";
    	
        printf("%d %s de cerveja no muro,\n", n, s1);
        printf("%d %s de cerveja,\n", n, s1);
        printf("Bebo uma, jogo no lixo\n");
        printf("%d %s no muro.\n\n", n - 1, s2);
        n--;
    }

    // sair quando a música terminar
    printf("Nossa isso foi chato.\n");
    return 0;
}
