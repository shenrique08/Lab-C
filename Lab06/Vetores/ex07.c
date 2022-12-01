#include <stdio.h>

void main()
{
    int numeros[6];
    
    int soma_pares = 0;
    int quant_impares = 0;

    for (int i = 0; i < 6; i++) {
        printf("Digite um valor inteiro para a posicao [%d]: ", i);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            soma_pares += numeros[i];
            printf("[%d] eh par\n", numeros[i]);

        } else {
            quant_impares += 1;
            printf("[%d] eh impar\n", numeros[i]);

        }
    }

    printf("A soma dos numeros pares eh %d\n", soma_pares);
    printf("A quantidade de impares eh %d", quant_impares);
    
}