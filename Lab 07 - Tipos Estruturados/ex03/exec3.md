# Impressão de Alunos Aprovados

Considerando as declarações a seguir para representar o cadastro de alunos de uma disciplina, implemente uma função que exiba na tela o número de matrícula, o nome, a turma e a média de todos os alunos que foram aprovados na disciplina (Média ≥ 6).

```c
typedef struct aluno Aluno;

struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};
```

A função recebe como parâmetros o número de alunos e um vetor de ponteiros para os dados dos alunos. Essa função deve obedecer ao protótipo:

```c
void imprime_aprovados(int n, Aluno** turmas);
```

## Entrada
* A primeira linha da entrada consiste de um inteiro positivo n, que representa a quantidade de alunos da disciplina
* Para as 4*n linhas seguintes serão listados as informações dos alunos:
  * Nome
  * Matrícula
  * Turma
  * Notas

## Saída
Na saída imprima as informações dos alunos aprovados seguidos de uma linha em branco.