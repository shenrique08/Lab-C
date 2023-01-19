#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *inteiros, N;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    inteiros = calloc(N, sizeof(int));

    if (inteiros == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        printf("Digite o [%do] valor inteiro: ", i + 1);
        scanf("%d", &inteiros[i]);
    }

    int X, qtd_multiplos_de_X = 0;
    printf("Digite um valor inteiro 'X': ");
    scanf("%d", &X);

    printf("\nNumeros dentro do vetor que sao multiplos de %d:\n", X);
    for (int i = 0; i < N; i++) {
        if (inteiros[i] % X == 0) {
            printf("[%d] ", inteiros[i]);
            qtd_multiplos_de_X += 1;
        }
    }
    printf("\nQuantidade de multiplos de %d: %d\n\n", X, qtd_multiplos_de_X);
    
    return 0;
}