#include <stdio.h>
#include <string.h>

void main()
{
    char carros[5][50], modelo_mais_economico[50];
    float consumo[5];
    int mais_economico = 0;
    int posicao_mais_economico = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do carro: ");
        scanf("%s", carros[i]);
        fflush(stdin);

        printf("Digite o consumo do [%s] em km/l: ", carros[i]);
        scanf("%f", &consumo[i]);

    }

    for (int i = 0; i < 5; i++) {
        
        if (consumo[i] > mais_economico) {
            mais_economico = consumo[i];
            posicao_mais_economico = i;

        }
    }

    strcpy(modelo_mais_economico, carros[posicao_mais_economico]);

    printf("\nO modelo do carro mais economico eh [%s] \n", modelo_mais_economico);

    for (int i = 0; i < 5; i++) {
        printf("\nCARRO: [%s] ", carros[i]);
        printf("Consumo em 1000km rodados: %.2f litros\n", 1000 / consumo[i]);

    }   

}