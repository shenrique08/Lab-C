#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numeros = NULL; // ponteiro para armazenar os números
    int numero; // número atual lido do usuário


    int contador = 0;
    while (1) {
        printf("Digite o [%do] elemento do vetor 'Digite um numero menor que 0 para encerrar': ", contador + 1);
        scanf("%d", &numero);
        
        if (numero < 0) 
            break;

        contador += 1;
        numeros = realloc (numeros, contador * sizeof(int)); // realocando a memória a cada vez que o usuário digitar um novo número
        numeros[contador - 1] = numero; // armazena o número digitado no vetor
    }


    // impressão do vetor lido
    printf("\n\nVetor lido\n");
    for (int i = 0; i < contador; i++) 
        printf("[%d] ", numeros[i]);
    

    free(numeros);
    printf("\n\n");
    return 0;
}