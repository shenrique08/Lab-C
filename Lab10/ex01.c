#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *valores;

    valores = malloc(5 * sizeof(int)); // alocando memória

    // checando se a memória foi alocada com sucesso
    if (valores == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    // pedindo ao usuário os valores
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor inteiro de posicao [%d]: ", i);
        scanf("%d", &valores[i]);
    }
    // impressão dos valores fornecidos
    printf("\nValores fornecidos\n");
    for (int i = 0; i < 5; i++) {
        printf("[%d] ", valores[i]);
    }

    free(valores); // liberando a memória alocada

    return 0;
}