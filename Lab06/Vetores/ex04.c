#include <stdio.h>

void main()
{
    int valores[5];

    int posicao_maior = 0;
    int posicao_menor = 0;
    int maior_valor = 0;
    int menor_valor = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor da posicao [%d]: ", i);
        scanf("%d", &valores[i]);
        
        if (i == 0) {
            maior_valor = valores[i];
            menor_valor = valores[i];
            posicao_maior = 0;
            posicao_menor = 0;

        } else {
            if (valores[i] > maior_valor) {
                posicao_maior = i;

            } else if (valores[i] < menor_valor) {
                posicao_menor = i;

            }
        }
    }

    printf("O maior valor se encontra na posicao [%d]\n", posicao_maior);
    printf("E o menor valor se encontra na posicao [%d]\n", posicao_menor);
    
}