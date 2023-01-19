#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *valores, tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    valores = calloc(tamanho, sizeof(int));

    // checando se a memória foi alocada com sucesso
    if (valores == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    int pares = 0, impares = 0;

    printf("\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o [%do] valor inteiro: ", i + 1);
        scanf("%d", &valores[i]);

        if (valores[i] % 2 == 0)
            pares += 1;
        else 
            impares += 1;
    }

    printf("\nQuantidade de pares = %d\n", pares);
    printf("Quantidade de impares = %d\n\n", impares);

    free(valores);
    return 0;
}