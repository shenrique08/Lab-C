#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int matriz[4][4];

    srand(time(NULL)); 

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = (rand() % 20) + 1; // geração de números pseudoaleatórios entre 1 e 20

        }
    }

    printf("\n     MATRIZ ORIGINAL\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" [%2d] ", matriz[i][j]);
        }

    printf("\n");

    }

    printf("\nMATRIZ TRIANGULAR INFERIOR\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            if (i == j || i > j) {
                printf(" [%2d] ", matriz[i][j]);
            }
            else {
                matriz[i][j] = 0;
                printf(" [%2d] ", matriz[i][j]);
            } 
        }
    
    printf("\n");

    }
}