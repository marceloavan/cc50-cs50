/****************************************************************************
 * beer4.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Canta a música das 99 garrafas de cerveja.
 *
 * Demonstra loop while.
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>


// protótipo da função
void chorus(int b);


int
main(void)
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
    while (n)
    	chorus(n--);

    // sair quando a música terminar
    printf("Nossa isso foi chato.\n");
    return 0;
}


/*
 * Canta sobre um número específico de garrafas.
 */

void
chorus(int b)
{
    // utiliza gramática apropriada
    string s1 = (b == 1) ? "garrafa" : "garrafas";
    string s2 = (b == 2) ? "garrafa" : "garrafas";
    	
    printf("%d %s de cerveja no muro,\n", b, s1);
    printf("%d %s de cerveja,\n", b, s1);
    printf("Bebo uma, jogo no lixo\n");
    printf("%d %s no muro.\n\n", b - 1, s2);
}
