#include <stdio.h>

void main()
{
    int matriz[4][4];
    int qtd_maior_que_zero = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor da matriz de posicao [%d] X [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > 10)
                qtd_maior_que_zero += 1;

        }
    }

    printf("A quantidade de valores maiores que dez eh [%d]", qtd_maior_que_zero);

}