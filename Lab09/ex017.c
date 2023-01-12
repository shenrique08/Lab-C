#include <stdio.h>

void inteiro_e_fracionario(float num, int *inteiro, float *fracionario)
{
    *inteiro = (int) num;
    *fracionario = (float) num - (int) num;
}

void main()
{
    float numero;
    int integer;
    float fraction;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    inteiro_e_fracionario(numero, &integer, &fraction);

    printf("Parte inteira de %f = %d\n", numero, integer);
    printf("Parte fracionaria de %f = %f\n", numero, fraction);
    
}