/****************************************************************************
 * structs.h
 *
 * CC50
 * Gabriel Guimarães
 *
 * Demonstra o uso de structs.
 ***************************************************************************/
       
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"


// tamanho da classe
#define ALUNOS 3


int
main(void)
{
    // declara a classe
    aluno classe[ALUNOS];

    // pega as informações sobre os alunos
    for (int i = 0; i < ALUNOS; i++)
    {
        printf("ID do aluno: ");
        classe[i].id = GetInt();

        printf("Nome do aluno: ");
        classe[i].nome = GetString();

        printf("Curso do aluno: ");
        classe[i].curso = GetString();
        printf("\n");
    }

    // agora imprime todos os alunos de Computação
    for (int i = 0; i < ALUNOS; i++)
        if (strcmp(classe[i].curso, "Computação") == 0)
            printf("%s faz Computação!\n\n", classe[i].nome);
    
    // libera a memória
    for (int i = 0; i < ALUNOS; i++)
    {
        free(classe[i].nome);
        free(classe[i].curso);
    }
}
