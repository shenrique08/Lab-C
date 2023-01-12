#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    float matriz[3][3];
    srand(time(NULL));

    // preenchimento da matriz
    printf("\n");
    printf("Matriz gerada\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // gerando números reais entre 0 e 10
            matriz[i][j] = (float)rand() / RAND_MAX * 10;   
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%.2f] ", matriz[i][j]);
        }
        printf("\n");    
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco de memoria em hexadecimal da posicao [%d][%d] = %p\n", i, j, &matriz[i][j]);
        }   
    }
    printf("\n");
}
