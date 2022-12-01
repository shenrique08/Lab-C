#include <stdio.h>

void main()
{
    int matriz[5][5];
    int X;
    int valor_de_x = 0;
    int posicao_X_linha = 0;
    int posicao_X_coluna = 0;
    int contador = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o valor da matriz de posicao [%d] X [%d] ", i, j);
            scanf("%d", &matriz[i][j]);

        }
    }

    printf("Digite o valor que deseja buscar na matriz: ");
    scanf("%d", &X);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] == X) {
                printf("O valor [%d] foi encontrado na posicao [%d] X [%d]\n", X, i, j);
                contador += 1; // verifica se o printf da linha 26 foi executado pelo menos uma vez, ou seja, verifica se o valor foi encontrado ou não

            }
        }
    }

    if (contador == 0)
        printf("O valor [%d] nao foi encontrado", X);

}