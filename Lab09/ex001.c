#include <stdio.h>

void main()
{
    int inteiro = 30;
    float real = 20.5;
    char caractere = 'A';

    int *Ponteiro_Inteiro = &inteiro;
    float *Ponteiro_Real = &real;
    char *Ponteiro_Caractere = &caractere;

    printf("\nValores iniciais:\n\n");
    printf("Inteiro = %d\n", inteiro);
    printf("Real = %f\n", real);
    printf("Caractere = %c\n\n", caractere);

    *Ponteiro_Inteiro = 50;
    *Ponteiro_Real = 100.866;
    *Ponteiro_Caractere = 'B';

    printf("Valores finais:\n\n");
    printf("Inteiro = %d\n", inteiro);
    printf("Real = %f\n", real);
    printf("Caractere = %c\n\n", caractere);
    
}
