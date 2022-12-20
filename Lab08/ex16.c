#include <stdio.h>
#include <string.h>

#define NUM_FILMES 5

typedef struct 
{

    char nome[21];
    int qtd_filmes;

} Diretores;

typedef struct 
{
    char nome_filme[21];
    int ano_lancamento;
    float duracao;

} Filmes;

void main()
{
    Diretores diretores[NUM_FILMES];
    Filmes filmes[NUM_FILMES];

    // armazenando as informações 
    for (int i = 0; i < NUM_FILMES; i++) {
        printf("Digite o nome do [%do] diretor: ", i + 1);
        fgets(diretores[i].nome, 21, stdin);

        printf("Digite a quantidade de filmes produzidas por %s", diretores[i].nome);
        scanf("%d", &diretores[i].qtd_filmes);
        fflush(stdin);

        printf("Digite o nome do [%do] filme: ", i + 1);
        fgets(filmes[i].nome_filme, 21, stdin);

        printf("Digite o ano de lancamento de %s", filmes[i].nome_filme);
        scanf("%d", &filmes[i].ano_lancamento);

        printf("Digite a duracao do filme em minutos: ");
        scanf("%d", &filmes[i].duracao);
        fflush(stdin);
        printf("\n");
    }

    int contador = 0;
    char nome_diretor[21];

    while (1) {
        printf("Digite o nome do diretor que deseja buscar: ");
        fgets(nome_diretor, 21, stdin);

        if (strlen(nome_diretor) == 0) 
            break; // se a string for vazia, pare o programa

        if (strcmp(diretores[contador].nome, nome_diretor) == 0) {  // se o diretor for encontrado, imprima os filmes que ele produziu

            printf("FILMES PRODUZIDOS POR %s\n", nome_diretor);
            for (int i = 0; i < NUM_FILMES; i ++) {
                printf("%s", filmes[i].nome_filme);

            }
        } else 
            printf("Diretor nao encontrado\n\n");
            break;

    contador++;
    }
    
    printf("\nPROGRAMA ENCERRADO\n");
}