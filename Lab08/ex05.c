#include <stdio.h>

typedef struct 
{
    float a;
    float b;
    float c;

} Vetor;

void main()
{
    Vetor vetor[2], soma_vet;

    for (int i = 0; i < 2; i++)
    {
        printf("Digite X do Vetor (X, Y, Z) ");
        scanf("%f", &vetor[i].a);
        printf("Digite Y do Vetor (X, Y, Z) ");
        scanf("%f", &vetor[i].b);
        printf("Digite Z do Vetor (X, Y, Z) ");
        scanf("%f", &vetor[i].c);
    printf("\n");
    }
    soma_vet.a = vetor[0].a + vetor[1].a;
    soma_vet.b = vetor[0].b + vetor[1].b;
    soma_vet.c = vetor[0].c + vetor[1].c;

    printf("Soma dos vetores = (%.2f, %.2f, %.2f)", soma_vet.a, soma_vet.b, soma_vet.c);

}