/****************************************************************************
 * progress3.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Simula uma barra de progresso melhorada
 *
 * Demonstra o uso de um loop while
 ***************************************************************************/

#include <stdio.h>
#include <unistd.h>

int
main(void)
{
    int i = 0;

    while (i <= 100)
    {
        printf("\rPorcentagem completa: %d%%", i);
        fflush(stdout);
        sleep(1);
        i++;
    }
    printf("\n");
}
