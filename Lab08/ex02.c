#include <stdio.h>

typedef struct 
{
    char nome[70];
    int idade;
    char endereco[100];

} Pessoa;

void main()
{
    Pessoa pessoa;

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 70, stdin);

    printf("Digite sua idade: ");
    scanf("%i", &pessoa.idade);
    fflush(stdin);
    
    printf("Digite seu endereco: ");
    fgets(pessoa.endereco, 100, stdin);

}