#include <stdio.h>

void troca_de_valores(int *valor1, int *valor2)
{
    int valor_referencia;
    valor_referencia = *valor1;
    *valor1 = *valor2;
    *valor2 = valor_referencia;

}
void main()
{
    int x1, x2;

    printf("Digite dois valores inteiros: \n");
    scanf("%d %d", &x1, &x2);

    printf("\nValores iniciais:\n\n");
    printf("Valor 1: %d\n", x1);
    printf("Valor 2: %d\n\n", x2);

    troca_de_valores(&x1, &x2);

    printf("Valores finais:\n\n");
    printf("Valor 1: %d\n", x1);
    printf("Valor 2: %d\n\n", x2);

}
