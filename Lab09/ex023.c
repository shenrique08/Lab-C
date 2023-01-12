#include <stdio.h>

int maior_valor(int *array, int N)
{
    int maior = array[0];

    for (int i = 0; i < N; i++) {
        if (array[i] > maior)
            maior = array[i];
    }
    return maior;
}

void main()
{
    int tamanho, elementos;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int valores[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o vetor da posicao [%d] ", i);
        scanf("%d", &valores[i]);
    }

    printf("Quantos elementos por linha? ");
    scanf("%d", &elementos);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
        if ((i + 1) % elementos == 0) {
            printf("\n");
        }
    }

    printf("\nO maior valor do vetor eh %d\n\n", maior_valor(valores, tamanho));

}