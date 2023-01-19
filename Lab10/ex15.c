#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N, M;

    printf("\nDigite a quantidade de linhas para a matriz: ");
    scanf("%d", &N);

    printf("Digite a quantidade de colunas para a matriz: ");
    scanf("%d", &M);

    int *matriz = calloc(N * M, sizeof(int));
    srand(time(NULL));

    // gerando matriz de linhas N e colunas M e a mostrando
    printf("\n\nMatriz gerada: \n\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            matriz[i * M + j] = rand() % 100;
            printf("[%2d]", matriz[i * M + j]);
        }
        printf("\n");
    }

    // localizando os 3 maiores números da matriz
    int maior1 = matriz[0 * M + 0], linha1 = 0, coluna1 = 0;
    int maior2 = matriz[0 * M + 0], linha2 = 0, coluna2 = 0;
    int maior3 = matriz[0 * M + 0], linha3 = 0, coluna3 = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matriz[i * M + j] > maior1) {
                maior3 = maior2;
                linha3 = linha2;
                coluna3 = coluna2;
                maior2 = maior1;
                linha2 = linha1;
                coluna2 = coluna1;
                maior1 = matriz[i * M + j];
                linha1 = i;
                coluna1 = j;
            }
            else if (matriz[i * M + j] > maior2) {
                maior3 = maior2;
                linha3 = linha2;
                coluna3 = coluna2;
                maior2 = matriz[i * M + j];
                linha2 = i;
                coluna2 = j;
            }
            else if (matriz[i * M + j] > maior3) {
                maior3 = matriz[i * M + j];
                linha3 = i;
                coluna3 = j;
            }
        }
    }

    printf("\nMaior 1: %d (Linha: %d, Coluna: %d)\n", maior1, linha1 + 1, coluna1 + 1);
    printf("Maior 2: %d (Linha: %d, Coluna: %d)\n", maior2, linha2 + 1, coluna2 + 1);
    printf("Maior 3: %d (Linha: %d, Coluna: %d)\n\n", maior3, linha3 + 1, coluna3 + 1);

    free(matriz);
    
    return 0;
}