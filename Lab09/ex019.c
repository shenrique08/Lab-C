#include <stdio.h>

void maior_elemento (int *valores, int N)
{
    int maior = valores[0], contador = 0;

    for (int i = 0; i < N; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
            contador = 1;
        } else if (valores[i] == maior) { 
            contador += 1;  // calcula a quantidade de vezes que apareceu o maior valor

        }
    }
    printf("\nO maior valor do vetor eh %d\n", maior);
    printf("E esse valor apareceu %d vezes\n\n", contador);
}

void main()
{
    int amout_values;

    printf("Digite a quantidade de valores para o array: ");
    scanf("%d", &amout_values);

    int values[amout_values];

    for (int i = 0; i < amout_values; i++) {
        printf("Digite o [%do] valor inteiro: ", i + 1);
        scanf("%d", &values[i]);
    }

    maior_elemento(values, amout_values);
}