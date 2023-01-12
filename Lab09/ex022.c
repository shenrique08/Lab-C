#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma_arrays(int *first_array, int *second_array, int size_first, int size_second)
{
    
    if (size_first != size_second) {
        printf("Erro... Arrays de tamanhos diferentes!!!\n");
        return 0;

    } else if (size_first == size_second) {
        int third_array[size_second];

        for (int i = 0; i < size_second; i++) {
            third_array[i] = first_array[i] + second_array[i];
            printf("[%d] ", third_array[i]);
        }
    }
    
    return 1;
}

void main()
{
    int tamanho1, tamanho2;
    srand(time(NULL));

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tamanho1);
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tamanho2);

    int vetor1[tamanho1], vetor2[tamanho2];

    printf("\nPrimeiro array:\n");
    for (int i = 0; i < tamanho1; i++) {
        vetor1[i] = rand() % 100;
        printf("[%d] ", vetor1[i]);
    }
    printf("\n\nSegundo array:\n");
    for (int i = 0; i < tamanho2; i++) {
        vetor2[i] = rand() % 100;
        printf("[%d] ", vetor2[i]);
    }

    printf("\n\nSoma do array1 com o array2\n\n");
    soma_arrays(vetor1, vetor2, tamanho1, tamanho2);
    printf("\n\n");
}