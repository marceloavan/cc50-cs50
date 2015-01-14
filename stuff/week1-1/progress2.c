/****************************************************************************
 * progress2.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Simula uma barra de progresso melhorada
 *
 * Demonstra o uso de \r, fflush e sleep
 ***************************************************************************/

#include <stdio.h>
#include <unistd.h>

int
main(void)
{
    for (int i = 0; i <= 100; i++)
    {
        printf("\rPorcentagem completa: %d%%", i);
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
}
