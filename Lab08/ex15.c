#include <stdio.h>
#include <string.h>

#define MAX_INGREDIENTS 10
#define MAX_NAME_LENGTH 25

// Estrutura para armazenar um ingrediente de uma receita
typedef struct 
{
    char name[MAX_NAME_LENGTH];
    int quantity;

} Ingrediente;

// Estrutura para armazenar uma receita
typedef struct 
{
    Ingrediente ingredients[MAX_INGREDIENTS];
    char name[MAX_NAME_LENGTH];
    int numIngredients;
    
} Receita;

void main() 
{
    // Cria um vetor de 5 receitas
    Receita receita[5];

    // Lê os dados de cada receita
    for (int i = 0; i < 5; i++) {
        printf("Insira o nome da receita %d: ", i + 1);
        scanf("%s", receita[i].name);

        printf("Insira a quantidade de ingredientes da receita %d: ", i + 1);
        scanf("%d", &receita[i].numIngredients);

        // Lê os ingredientes da receita
        for (int j = 0; j < receita[i].numIngredients; j++) {
            printf("Insira o nome do ingrediente %d: ", j + 1);
            scanf("%s", receita[i].ingredients[j].name);

            printf("Insira a quantidade do ingrediente %d: ", j + 1);
            scanf("%d", &receita[i].ingredients[j].quantity);
        }
    }

    // Loop para procurar por receitas
    char searchName[MAX_NAME_LENGTH];
    while (1) {
        printf("Insira o nome da receita a ser procurada (ou deixe em branco para sair): ");
        fgets(searchName, MAX_NAME_LENGTH, stdin);

        // Verifica se o usuário digitou uma string vazia
        if (strlen(searchName) == 0) break;
            
            
        // Procura a receita pelo nome
        int found = 0;
        for (int i = 0; i < 5; i++) {
            if (strcmp(receita[i].name, searchName) == 0) 
            {
                printf("Receita encontrada: %s\n", receita[i].name);
                printf("Ingredientes:\n");

                for (int j = 0; j < receita[i].numIngredients; j++) 
                {
                    printf("- %s (quantidade: %d)\n", receita[i].ingredients[j].name, receita[i].ingredients[j].quantity);
                }
                found = 1;
                break;
            }
        }

        if (!found) 
            printf("Receita não encontrada.\n");

    }
}