#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct Cidade 
{
    char nome[100];
    double x, y;

};

int main() 
{
    int n;

    printf("Digite a quantidade de cidades: ");
    scanf("%d", &n);

    struct Cidade *cidades = (struct Cidade *) malloc(n * sizeof(struct Cidade));

    for (int i = 0; i < n; i++) {
        printf("Digite o nome da [%da] cidade : ", i + 1);
        fgets(cidades[i].nome, 100, stdin);

        printf("Digite as coordenadas X e Y de %s", cidades[i].nome);
        scanf("%lf %lf", &cidades[i].x, &cidades[i].y);
        fflush(stdin);
    }

    // criação da matriz
    double **distancias = (double **) malloc(n * sizeof(double*));
    for (int i = 0; i < n; i++)
        distancias[i] = (double *) malloc(n * sizeof(double));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            double xDiff = cidades[i].x - cidades[j].x;
            double yDiff = cidades[i].y - cidades[j].y;
            distancias[i][j] = sqrt(xDiff * xDiff + yDiff * yDiff);
        }
    }

    printf("\nMatriz de distancias:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%.2lf] ", distancias[i][j]);
        }
        printf("\n");
    }

    int cidade1, cidade2;

    printf("\nDigite o numero de duas cidades para obter a distancia entre elas: ");
    scanf("%d %d", &cidade1, &cidade2);

    printf("A distancia entre %s e %s e %.2lf", cidades[cidade1 - 1].nome, cidades[cidade2 - 1].nome, distancias[cidade1 - 1][cidade2 - 1]);


    // liberando memória
    for (int i = 0; i < n; i++)
        free(distancias[i]);
    free(distancias);
    free(cidades);

    return 0;
}