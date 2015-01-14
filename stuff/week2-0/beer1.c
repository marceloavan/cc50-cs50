/****************************************************************************
 * beer1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Canta a música das 99 garrafas de cerveja.
 *
 * Demonstra for loop.
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
    for (int i = n; i > 0; i--)
    {
        printf("%d garrafa(s) de cerveja no muro,\n", i);
        printf("%d garrafa(s) de cerveja,\n", i);
        printf("Bebo uma, jogo no lixo\n");
        printf("%d garrafa(s) no muro.\n\n", i - 1);
    }

    // sair quando a música terminar
    printf("Nossa isso foi chato.\n");
    return 0;
}
