#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *valores, tamanho;

    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    valores = calloc(tamanho, sizeof(int)); // alocação da memória

    // checando se a memória foi alocada com sucesso
    if (valores == NULL) {
        printf("Erro ao alocar memoria! \n");
        exit(1);
    }
    printf("\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o [%do] valor inteiro: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\nVetor lido:\n");
    for(int i = 0; i < tamanho; i++) {
        printf("[%d] ", valores[i]);
    }

    free(valores);
    return 0;
}