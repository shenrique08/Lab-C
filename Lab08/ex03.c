#include <stdio.h>

typedef struct 
{
    char nome[50];
    long int matricula;
    char curso[50];

} Aluno;

void main()
{
    Aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome do [%do] aluno:\n", i + 1);
        fgets(alunos[i].nome, 50, stdin);
        
        printf("Digite o numero de matricula do %s", alunos[i].nome);
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);

        printf("Digite o curso do %s", alunos[i].nome);
        fgets(alunos[i].curso, 50, stdin);

    printf("\n");
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("\tNome do aluno: %s", alunos[i].nome);
        printf("\tNumero de matricula do aluno: %d\n", alunos[i].matricula);
        printf("\tCurso do aluno: %s", alunos[i].curso);

    printf("\n");
    
    }
}