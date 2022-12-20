#include <stdio.h>

#define SIZE 5

typedef struct 
{
    char marca[15];
    int ano;
    float preco;

} Carros;

void main()
{
    Carros carros[SIZE];
    float p;
    // leitura dos dados
    for (int i = 0; i < SIZE; i++) {
        printf("\n\nDigite a marca do carro [%d]: ", i + 1);
        fgets(carros[i].marca, 15, stdin);

        printf("Digite o ano do carro [%d]: ", i + 1);
        scanf("%d", &carros[i].ano);

        printf("Digite o valor do carro [%d]: R$ ", i + 1);
        scanf("%f", &carros[i].preco);
        fflush(stdin);
        printf("\n");
    }
    
    do {
        printf("Digite um valor padrao 'p' em R$ [DIGITE '0' PARA ENCERRAR] ");
        scanf("%f", &p);

        printf("\n\nCarros com carro menor do que o valor p: \n\n");
        for (int i = 0; i < SIZE; i++) {
            if (carros[i].preco < p) {
                printf("Marca do Carro: \t%s ", carros[i].marca);
                printf("Ano do Carro:   \t%d \n", carros[i].ano);
                printf("Valor do carro: \tR$%.3f \n", carros[i].preco);

            }
        printf("\n");

        }

    } while (p != 0);

    printf("\nPROGRAMA ENCERRADO\n\n");

}