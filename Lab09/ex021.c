#include <stdio.h>

void main()
{
    int valores[5] = {2, 54, 23, 9, 843};
    int *ponteiro = valores; // associando o ponteiro ao array

    for (int i = 0; i < 5; i++) {
        *ponteiro += 1; // somando mais 1 a cada posição do array
        ponteiro += 1; // incrementando o ponteiro para apontar para a próxima posição do array
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
}