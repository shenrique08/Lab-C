#include <stdio.h>

int negativos(float *vet, int N)
{
    int contador = 0;

    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {
            contador += 1;
        }
    }
    
    return contador;
}

void main()
{
    int n;

    printf("Digite a quantidade de elementos para o vetor: ");
    scanf("%d", &n);

    float vetor[n];
    
    for (int i = 0; i < n; i++) {
        printf("Digite o [%do] elemento do vetor: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("Ha %d valores negativos neste vetor\n\n", negativos(vetor, n));
}