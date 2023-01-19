#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *valores, i;

    valores = calloc(1500, sizeof(int));

    int qtd_zeros = 0; // contar os zeros do vetor
    for (i = 0; i < 1500; i++) {
        if (valores[i] == 0)
            qtd_zeros += 1;
    }
    printf("\n\nQuantidade de zeros do vetor: %d\n", qtd_zeros);

    // atribuindo para cada elemento do vetor o valor de seu índice
    for (i = 0; i < 1500; i++) {
        valores[i] = i;
    }

    printf("\nOs 10 primeiros elementos do vetor:\n");
    for (i = 0; i < 10; i++) 
        printf("[%d] ", valores[i]);

    printf("\n\nOs 10 ultimos elementos do vetor:\n");
    for (i = 1490; i < 1500; i++)
        printf("[%d] ", valores[i]);

    free(valores);
    printf("\n\n");
    return 0;
}