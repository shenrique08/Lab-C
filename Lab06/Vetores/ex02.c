
#include <stdio.h>

void main()
{
    int vetor[8];

    for (int i = 0; i < 8; i++) {
        printf("Digite o vetor na posicao [%d]: ", i);
        scanf("%d", &vetor[i]);

    }
    int x, y;

    printf("Digite duas posicoes para a soma: \n");
    scanf("%d %d", &x, &y);

    printf("A soma entre os vetores de posicao [%d] e de posicao [%d] eh [%d]", vetor[x], vetor[y], (vetor[x] + vetor[y]));

}