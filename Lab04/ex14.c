#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, dado1, dado2, n;

    int dado_maior = 0;
    int dado_menor = 0;

    srand(time(NULL));

    printf("Quantas vezes deseja lancar os dados? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        dado1 = rand() % 6;
        dado2 = rand() % 6;
        printf("\nValor do PRIMEIRO dado jogado = [%d] \n", dado1);
        printf("Valor do SEGUNDO dado jogado = [%d] \n", dado2);
        printf("\n");


        if (dado1 > dado2) {
            printf("[%d] > [%d].O valor do PRIMEIRO dado eh maior\n", dado1, dado2);

        } else if (dado2 > dado1) {
            printf("[%d] > [%d].O valor do SEGUNDO dado eh maior\n", dado2, dado1);

        } else {
            printf("[%d] = [%d].O valor do PRIMEIRO e do SEGUNDO dado sao os mesmos\n", dado1, dado2);

        }
    }

    printf("\n");

    return 0;

}