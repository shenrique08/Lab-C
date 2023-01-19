#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    long int matricula;
    char sobrenome[30];
    int ano_nasci;

} Alunos;


int main()
{
    int qtd_alunos;

    printf("Digite a quantidade de alunos que deseja cadastrar: ");
    scanf("%d", &qtd_alunos);

    Alunos *alunos = calloc(qtd_alunos, sizeof(*alunos)); // alocando a quantidade necessária de memória para armazenar os registros


    // input das informações dos alunos
    for (int i = 0; i < qtd_alunos; i++) {
        printf("\nDigite o numero da matricula do [%do] aluno: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);

        printf("Digite o sobrenome do [%do] aluno: ", i + 1);
        fgets(alunos[i].sobrenome, 30, stdin);

        printf("Digite o ano de nascimento do aluno [%do]: ", i + 1);
        scanf("%d", &alunos[i].ano_nasci);
        
    }
    

    // mostrando os dados armazenados
    printf("\n");
    for (int i = 0; i < qtd_alunos; i++) {
        printf("\nNumero de matricula do aluno [%d]: \t[%d]\n", i + 1, alunos[i].matricula);
        printf("Sobrenome do aluno             [%d]: \t%s", i + 1, alunos[i].sobrenome);
        printf("Ano de nascimento do aluno     [%d]: \t[%d]\n", i + 1, alunos[i].ano_nasci);
    }


    free(alunos);
    printf("\n");

    return 0;
}