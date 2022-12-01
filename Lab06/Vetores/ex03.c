#include <stdio.h>

void main()
{
    int valores[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o valor da posicao [%d] ", i);
        scanf("%d", &valores[i]);

    }

    printf("Os numeros em ordem reversa eh \n");

    for (int j = 5; j >= 0; j--) {
        printf("[%d] ", valores[j]);

    }
}