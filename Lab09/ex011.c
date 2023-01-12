#include <stdio.h>

void main()
{
    int elementos[5];

    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &elementos[i]);

        if (elementos[i] % 2 == 0) 
            printf("Valor par = %d \tPoisicao = %d\t Endereco de memoria em hexadecimal = %p\n", elementos[i], i, &elementos[i]);
    }
    printf("\n");
}