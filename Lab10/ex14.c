#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas;

    printf("Digite o numero de linhas para a matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas para a matriz: ");
    scanf("%d", &colunas);

    float *matriz = calloc(linhas * colunas, sizeof(float));

    printf("\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite a matriz de posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i * colunas + j]);
        }
    }

    printf("\nMatriz inserida: \n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("[%.3f]", matriz[i * colunas + j]);
        }
        printf("\n");
    }
    free(matriz);
    printf("\n");

    return 0;
}