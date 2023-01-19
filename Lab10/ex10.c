#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    double *valores;
    int qtd_valores;
    srand(time(NULL));

    printf("\nQuantos valores deseja armazenar? 'Digite um valor maior ou igual a 10' ");
    scanf("%d", &qtd_valores);


    // alocando na memória a quantidade de valares
    if (qtd_valores >= 10) {
        valores = malloc(qtd_valores * sizeof(double));
        // atribuindo valores ao vetor alocado e imprimindo-os
        printf("\nValores gerados: \n");
        for (int i = 0; i < qtd_valores; i++) {
            valores[i] = rand() % 100;
            printf("[%.lf] ", valores[i]);
        }

    } else {
        valores = malloc(10 * sizeof(double));
        // atribuindo valores ao vetor alocado e imprimindo-os
        printf("\nValor digitado menor que 10!!! 10 Valores gerados: \n");
        for (int i = 0; i < 10; i++) {
            valores[i] = rand() % 100;
            printf("[%.lf] ", valores[i]);
        }
    }

    free(valores);
    printf("\n\n");

    return 0;
}