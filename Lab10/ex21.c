#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int linha_primeira, coluna_primeira, linha_segunda, coluna_segunda, i, j;
    srand(time(NULL));

    printf("Digite a quantidade de LINHAS da PRIMEIRA matriz: ");
    scanf("%d", &linha_primeira);

    printf("Digite a quantidade de COLUNAS da PRIMEIRA matriz: ");
    scanf("%d", &coluna_primeira);

    printf("Digite a quantidade de LINHAS da SEGUNDA matriz: ");
    scanf("%d", &linha_segunda);

    printf("Digite a quantidade de COLUNAS da SEGUNDA matriz: ");
    scanf("%d", &coluna_segunda);

    int **matriz1 = malloc(linha_primeira * sizeof(int*));
    for(i = 0; i < linha_primeira; i++)
        matriz1[i] = malloc(coluna_primeira * sizeof(int));

    int **matriz2 = malloc(linha_segunda * sizeof(int*));
    for(i = 0; i < linha_segunda; i++)
        matriz2[i] = malloc(coluna_segunda * sizeof(int));

    int **matriz_resultante = malloc(linha_primeira * sizeof(int*));
    for(i = 0; i < linha_primeira; i++)
        matriz_resultante[i] = malloc(coluna_segunda * sizeof(int));


    if (coluna_primeira != linha_segunda) { // condição de existência da multiplicação de matrizes
        printf("\nImpossivel realizar essa multiplicacao!!!\n\n"); // encerra o programa

    } else {
        // geração da primeira matriz
        
        printf("\n\tPRIMEIRA matriz gerada\n");
        for (i = 0; i < linha_primeira; i++) {
            for (j = 0; j < coluna_primeira; j++) {
                matriz1[i][j] = rand() % 100;
                printf("[%2d]", matriz1[i][j]);
            }
            printf("\n");
        }

        // geração da segunda matriz
        

        printf("\n\tSEGUNDA matriz gerad\n");
        for (int i = 0; i < linha_primeira; i++) {
            for (j = 0; j < coluna_primeira; j++) {
                matriz2[i][j] = rand() % 100;
                printf("[%2d]", matriz2[i][j]);
            }
            printf("\n");
        }
        
        // fazendo a multiplicação das matrizes
        

        printf("\n\tMATRIZ RESULTANTE\n");
        for(i = 0; i < linha_primeira; i++) {
            for(j = 0; j < coluna_segunda; j++) {
                matriz_resultante[i][j] = 0;

                for(int k = 0; k < coluna_primeira; k++) {
                    matriz_resultante[i][j] += matriz1[i][k] * matriz2[k][j];
                    printf("[%6d]", matriz_resultante[i][j]);
                }
                printf("\n");
            }
        }
        
    }

    
    return 0;
}