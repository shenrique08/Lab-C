#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int bingo[5][5];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            bingo[i][j] = rand() % 99;

        }

        for (int k = 0; k < i; k++) {
            for (int l = 0; l < 5; l++) {
                if (bingo[i][j] == bingo[k][l])
                    bingo[i][j] = rand() % 99;

            }
        }
    }

    printf("\n  *** CARTELA ***\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("[%2d]", bingo[i][j]);

        }

    printf("\n");

    }

    printf("\n");

}