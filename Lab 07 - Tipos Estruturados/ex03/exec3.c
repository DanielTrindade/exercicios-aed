#include <stdio.h>
#include <stdlib.h>
typedef struct aluno Alunos;
struct aluno
{
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};
void imprime_aprovados(int n, Alunos **turmas)
{
    for (int i = 0; i < n; i++)
    {
        float media = (turmas[i]->p1 + turmas[i]->p2 + turmas[i]->p3) / 3.0;
        if (media >= 6.0)
        {
            printf("%s\n", turmas[i]->nome);
            printf("%s\n", turmas[i]->matricula);
            printf("%c\n", turmas[i]->turma);
            printf("%.2f\n\n", media);
        }
    }
}
void libera_memoria(int n, Alunos **turmas)
{
    for (int i = 0; i < n; i++)
    {
        free(turmas[i]);
    }
}
int main(void)
{
    Alunos **turmas;
    Alunos *aluno;
    int qtd_alunos;
    scanf("%d", &qtd_alunos);
    turmas = malloc(sizeof(Alunos *) * qtd_alunos);
    for (int i = 0; i < qtd_alunos; i++)
    {
        aluno = malloc(sizeof(Alunos));
        scanf("%s", aluno->nome);
        scanf("%s", aluno->matricula);
        scanf(" %c", &aluno->turma);
        scanf("%f %f %f", &aluno->p1, &aluno->p2, &aluno->p3);
        turmas[i] = aluno;
    }
    imprime_aprovados(qtd_alunos, turmas);
    libera_memoria(qtd_alunos, turmas);
    free(turmas);
    return 0;
}