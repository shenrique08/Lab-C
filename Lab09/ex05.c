#include <stdio.h>

void troca(int *valor1, int *valor2)
{
    int referencia;
    if (*valor2 > *valor1) {
        referencia = *valor1;
        *valor1 = *valor2;
        *valor2 = referencia;
    }

}

void main()
{
    int inteiro1, inteiro2;

    printf("Digite dois inteiros: \n");
    scanf("%d %d", &inteiro1, &inteiro2);

    troca(&inteiro1, &inteiro2);

    printf("Maior valor: %d\n", inteiro1);
    printf("Menor valor: %d", inteiro2);

}