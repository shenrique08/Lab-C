#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma;
    
    for (i = 1000; i >= 1; i--) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;

        }
    }

    printf("\nA soma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou de 5 eh %d", soma);

    return 0;

}