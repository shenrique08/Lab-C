#include <stdio.h>

void main()
{
    int matriz[4][4];
    
    int posicao_linha_maior_valor = 0;
    int posicao_coluna_maior_valor = 0;
    int maior_valor = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite a matriz de posicao [%d] X [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                posicao_linha_maior_valor = i;
                posicao_coluna_maior_valor = j;
                maior_valor = matriz[i][j];

            } else {
                if (matriz[i][j] > maior_valor) {
                    posicao_linha_maior_valor = i;
                    posicao_coluna_maior_valor = j;
                    maior_valor = matriz[i][j];

                }
            }
        }
    }

    printf("\nO maior valor da matriz foi [%d]\n", maior_valor);
    printf("E a posicao dele valor eh [%d][%d]\n", posicao_linha_maior_valor, posicao_coluna_maior_valor);

}