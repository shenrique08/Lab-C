#include <stdio.h>

void soma(int *valor1, int *valor2)
{
    int soma = *valor1 + *valor2;
    *valor1 = soma;

}

void main()
{
    int numA = 20, numB = 50;

    printf("\nValores iniciais:\n\n");
    printf("Valor 1: %d\n", numA);
    printf("Valor 2: %d\n\n", numB);

    soma(&numA, &numB);

    printf("\nValores finais:\n\n");
    printf("Valor 1: %d\n", numA);
    printf("Valor 2: %d\n\n", numB);

}
