#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // Vetor de 1024 bytes
    char *vetor1 = (char*) malloc(1024 * sizeof(char));

    // Matriz de inteiros 10x10
    int **matriz = (int**) malloc(10 * sizeof(int*));
    for (int i = 0; i < 10; i++) {
        matriz[i] = (int*) malloc(10 * sizeof(int));
    }

    // Vetor para armazenar 50 registros
    struct Registro {
        char nome[31];
        int codigo;
        float preco;
    } *vetor2 = (struct Registro*) malloc(50 * sizeof(struct Registro));

    // Texto de até 100 linhas com até 80 caracteres
    char **texto = (char**) malloc(100 * sizeof(char*));
    for (int i = 0; i < 100; i++) 
        texto[i] = (char*) malloc(80 * sizeof(char));
    

    // liberando memória
    free(vetor1);
    for (int i = 0; i < 10; i++) 
        free(matriz[i]);
    
    free(matriz);
    free(vetor2);

    for (int i = 0; i < 100; i++) 
        free(texto[i]);
    

    free(texto);

    return 0;
}