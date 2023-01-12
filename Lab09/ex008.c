#include <stdio.h>

void main()
{
    float elementos[] = {20.5, 10.3, 5.4, 3.2, 9.3, 1.5, 7.45, 5.55, 11.9, 8.23};
    
    // impressão do valor e de seu respectivo endreço de memória
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("[%do] valor:  %.3f\t\t Endereco de memoria em decimal:  %d\t\tEndereco de memoria em hexadecimal:  %p\n"
        , i + 1, elementos[i], &elementos[i], &elementos[i]);

    }
    printf("\n");
}
