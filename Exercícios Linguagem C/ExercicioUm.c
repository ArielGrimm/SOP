#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho_turma_a;
    int tamanho_turma_b;
    int i = 0;
    double media_turma_a = 0.0;
    double media_turma_b = 0.0;
    double nota = 0.0;
    double *lista_de_notas; // Ponteiro

    printf("Digite a quantidade de alunos da turma A: ");
    scanf("%d", &tamanho_turma_a);

    // Alocar na memória o vetor com o tamanho da turma
    lista_de_notas = (double *)malloc(tamanho_turma_a * sizeof(double));
    for (i = 0; i < tamanho_turma_a; i++)
    {
        printf("Digite a nota do aluno %d: ", (i + 1));
        scanf("%lf", &nota);
        lista_de_notas[i] = nota;
    }
    // Calcula a média da turma A
    for (i = 0; i < tamanho_turma_a; i++)
    {
        media_turma_a = media_turma_a + lista_de_notas[i];
    }
    media_turma_a = media_turma_a / tamanho_turma_a;

    printf("Digite a quantidade de alunos da turma B: ");
    scanf("%d", &tamanho_turma_b);

    // Realoca o tamanho do vetor lista_de_notas de acordo com o tamanho da turma B
    lista_de_notas = (double *)realloc(lista_de_notas, tamanho_turma_b * sizeof(double));
    for (i = 0; i < tamanho_turma_b; i++)
    {
        printf("Digite a nota do aluno %d: ", (i + 1));
        scanf("%lf", &nota);
        lista_de_notas[i] = nota;
    }
    // Calcula a média da turma b
    for (i = 0; i < tamanho_turma_b; i++)
    {
        media_turma_b = media_turma_b + lista_de_notas[i];
    }
    media_turma_b = media_turma_b / tamanho_turma_b;

    printf("Media da Turma A: %.2f \n", media_turma_a);
    printf("Media da Turma B: %.2f \n", media_turma_b);

    // liberar o espaço na memória
    free(lista_de_notas);

    return 0;
}