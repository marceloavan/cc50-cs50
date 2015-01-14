/****************************************************************************
 * array.c
 *
 * Ciência da Computação 50
 * Gabriel Lima Guimarães
 *
 * Computa a média de um aluno em 2 testes.
 *
 * Demonstra o uso de um array, uma constante e round.
 ***************************************************************************/

#include <cc50.h>
#include <stdio.h>


// número de testes
#define QUIZZES 2

int
main(void)
{
    float grades[QUIZZES];

    // pergunta as notas ao usuário
    printf("\nQuais foram suas notas?\n\n");
    for (int i = 0; i < QUIZZES; i++)
    {
        printf("Teste #%d de %d: ", i+1, QUIZZES);
        grades[i] = GetFloat();
    }

    // computa a média
    float sum = 0;
    for (int i = 0; i < QUIZZES; i++)
        sum += grades[i];
    int average = (int) (sum / QUIZZES + 0.5);

    // report average
    printf("\nSua média foi: %d\n\n", average);
}
