/****************************************************************************
 * progress1.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Simula uma barra de progresso
 *
 * Demonstra o uso de sleep
 ***************************************************************************/

#include <stdio.h>
#include <unistd.h>

int
main(void)
{
    for (int i = 0; i <= 100; i++)
    {
        printf("Porcentagem completa: %d%%\n", i);
        sleep(1);
    }
    printf("\n");
}
