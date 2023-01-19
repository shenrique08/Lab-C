#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *vetor = NULL; 
    int tamanho = 10, contador = 0; 
    int numero;

    vetor = calloc(tamanho, sizeof(int)); // Aloca o vetor inicial com tamanho 10

    printf("\n");
    while (1) {
        printf("Digite o [%do] numero: (0 para encerrar) ", contador + 1);
        scanf("%d", &numero);

        if (numero == 0) break; // Se o usuário digitar 0, encerra o laço

        if (contador == tamanho) { 
            int *vetorNovo = NULL;
            tamanho += 10; // Aumenta o tamanho do vetor em 10
            vetorNovo = calloc(tamanho, sizeof(int)); // Aloca um novo vetor com o novo tamanho
             
            for (int i = 0; i < contador; i++)  // Copia os elementos do vetor antigo para o novo
                vetorNovo[i] = vetor[i];
            
            free(vetor); // Libera a memória do vetor antigo
            vetor = vetorNovo; // O vetorNovo se torna o vetor principal
        }

        vetor[contador] = numero; // Adiciona o número lido no vetor
        contador++; // Incrementa o contador de elementos
    }

    printf("\nValores lidos: \n");
    for (int i = 0; i < contador; i++) 
        printf("[%d] ", vetor[i]);

    printf("\n\n");

    free(vetor); 

    return 0;
}