#include <stdio.h>
#include <string.h>

#define NUM_LIVROS 2

typedef struct 
{
    char titulo[30];
    char autor[30];
    int ano_lancamento;

} Livro;

void main()
{
    Livro livros[NUM_LIVROS];
    char livro_procurado[30];

    printf("\n\tCADASTRO DE LIVROS\n\n");
    for (int i = 0; i < NUM_LIVROS; i ++) {
        printf("Digite o titulo do [%do] livro: ", i + 1);
        fgets(livros[i].titulo, 30, stdin);

        printf("Digite o autor de %s", livros[i].titulo);
        fgets(livros[i].autor, 30, stdin);

        printf("Digite o ano de lancamento de %s", livros[i].titulo);
        scanf("%i", &livros[i].ano_lancamento);
        fflush(stdin);

        printf("\n");

    }
    // busca pelo livro desejado
    printf("Qual titulo deseja buscar? ");
    fgets(livro_procurado, 30, stdin);

    printf("\n\tLIVROS ENCONTRADOS\n\n");
    for (int i = 0; i < NUM_LIVROS; i++) {
        if (strcmp(livros[i].titulo, livro_procurado) == 0) {
            printf("TITULO            \t%s", livros[i].titulo);
            printf("AUTOR:            \t%s", livros[i].autor);
            printf("ANO DE LANCAMENTO:\t%d", livros[i].ano_lancamento);
            printf("\n");
        }
    }
}