#include <stdio.h>
#include <stdlib.h>


// função para identificar se um valor qualquer está contido na matriz
int procura_numero(int *matriz, int numero, int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i * colunas + j] == numero)
                return 1;
        }  
    }

    return 0; // tem que estar aqui, pois será retornado 0 depois de feitas todas as verificações
}


int main()
{
    int linhas, colunas;

    printf("\nDigite a quantidade de LINHAS para a matriz: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de COLUNAS para a matriz: ");
    scanf("%d", &colunas);

    int *matriz = calloc(linhas * colunas, sizeof(int)); // alocação de memória para a matriz

    // preenchendo a matriz
    printf("\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite a matriz de posicao [%d][%d] ", i, j);
            scanf("%d", &matriz[i * colunas + j]);
        }
    }

    int valor;

    printf("\nDigite o valor a ser procurado: ");
    scanf("%d", &valor);

    int resultado = procura_numero(matriz, valor, linhas, colunas);

    if (resultado == 1)
        printf("\n%d foi encontrado com sucesso!\n\n", valor);
    else 
        printf("\n%d nao foi encontrado!\n\n", valor);


    free(matriz);

    return 0;
}