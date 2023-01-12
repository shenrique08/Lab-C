#include <stdio.h>

int troca(int *valor1, int *valor2)
{
    *valor1 = *valor1 * 2;
    *valor2 = *valor2 * 2;

    return *valor1 + *valor2;

}

void main()
{
    int A, B;

    printf("Digite dois valores inteiros: \n");
    scanf("%d %d", &A, &B);

    printf("\nValores iniciais:\n\n");
    printf("Valor 1: %d\n", A);
    printf("Valor 2: %d\n\n", B);

    troca(&A, &B);

    printf("\nValores dobrados:\n\n");
    printf("Valor 1: %d\n", A);
    printf("Valor 2: %d\n\n", B);
    printf("Soma valor 1 com o valor 2 = %d\n", (A + B));

}
