#include <stdio.h>

void main()
{
    int valores[5];
    int *ponteiro;
    ponteiro = valores; // Faz o ponteiro apontar para o início do array

    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", ponteiro); // Lê o valor pelo teclado e armazena na posição apontada pelo ponteiro

        printf("O dobro de %d eh %d\n\n", *ponteiro, (*ponteiro * 2));

    }
    printf("\n");

}