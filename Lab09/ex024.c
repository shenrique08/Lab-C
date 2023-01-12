#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void max_min_array(int *V, int *min, int *max)
{
    srand(time(NULL));
    // preenchimento do vetor com números pseudo-aleatório entre 0 e 100
    printf("Vetor gerado: \n\n");
    for (int i = 0; i < 10; i++) {
        V[i] = rand() % 100;
        printf("[%d] ",V[i]);
    }
    *max = V[0];
    *min = V[0];
    // varrendo o vetor para encontrar os valores máximos e mínimos
    for (int i = 0; i < 10; i++) {
        if (V[i] > *max)
            *max = V[i];
        else if (V[i] < *min)
            *min = V[i];
    }
}
void main()
{
    int valores[10], maior, menor;
    

    max_min_array(valores, &menor, &maior);

    printf("\n\nO maior valor gerado foi [%d]\n", maior);
    printf("O menor valor gerado foi [%d]\n\n", menor);

}