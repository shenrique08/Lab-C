#include <stdio.h>

void Preenche(int *valores, int tamanho, int valor) {
    int* end = valores + tamanho;

    for (int *i = valores; i < end; i++) {
        *i = valor;
    }
}