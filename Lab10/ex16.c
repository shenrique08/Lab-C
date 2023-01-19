#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int N, M, i, j;

    printf("\nInsira a quantidade de linhas da matriz: ");
    scanf("%d", &N);

    printf("Insira a quantidade de colunas da matriz: ");
    scanf("%d", &M);

    int **matriz = malloc(N * sizeof(int*));
    for(i = 0; i < N; i++)
        matriz[i] = malloc(M * sizeof(int)); 

    int **matriz_transposta = malloc(M * sizeof(int*));
    for (i = 0; i < M; i++)
        matriz_transposta[i] = malloc(N * sizeof(int));

    // Leitura da matriz
    
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            printf("Insira o valor da matriz de posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Construção da matriz transposta
    for(i = 0; i < N; i++) 
        for(j = 0; j < M; j++) 
            matriz_transposta[j][i] = matriz[i][j];

    // Impressão da matriz original
    printf("\nMatriz original:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    // Impressão da matriz transposta
    printf("\nMatriz transposta:\n");
    for(i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            printf("[%d] ", matriz_transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}