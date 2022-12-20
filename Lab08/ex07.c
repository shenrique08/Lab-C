#include <stdio.h>
#include <string.h>
#define SIZE 5

typedef struct 
{
    char nome[50];
    char endereco[150];
    long int telefone;

} Pessoas;

void main()
{
    Pessoas pessoas[SIZE];
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        printf("Digite o [%do] nome: ", i + 1);
        fgets(pessoas[i].nome, 40, stdin);

        printf("Digite o [%do] endereco: ", i + 1);
        fgets(pessoas[i].endereco, 150, stdin);

        printf("Digite o [%do] telefone: ", i + 1);
        scanf("%d", &pessoas[i].telefone);
        fflush(stdin);
        printf("\n");
    }

    // Ordena o array de pessoas em ordem alfabética pelo nome
    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                // Troca as pessoas de posição se o nome da pessoa i for maior que o nome da pessoa j
                Pessoas temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;
            }
        }
    }

    // Imprime as informações das pessoas em ordem alfabética
    printf("\nINFORMACOES EM ORDEM ALFABETICA\n\n");
    for (i = 0; i < SIZE; i++) {
        printf("Nome:     \t%s", pessoas[i].nome);
        printf("Endereco: \t%s", pessoas[i].endereco);
        printf("Telefone: \t%d", pessoas[i].telefone);
        printf("\n\n");
    }

}