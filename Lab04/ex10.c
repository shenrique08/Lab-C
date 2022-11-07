#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma;
    soma = 0;

    for (i = 2; i <= 100; i += 2) {
        printf("%d ", i);
        soma += i;
    }
    printf("\nA soma dos primeiros 50 numeros pares eh %d", soma);

    return 0;

}