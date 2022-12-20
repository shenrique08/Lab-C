#include <stdio.h>

#define SIZE 5

typedef struct 
{
    char nome[16];
    float potencia;
    float uso_por_dia;

} Eletrodomestico;

void main()
{
    Eletrodomestico eletrodomesticos[SIZE];
    printf("\n");

    // leitura dos dados
    for (int i = 0; i < SIZE; i++) {
        printf("Digite o nome do [%do] produto: ", i + 1);
        scanf("%15s", &eletrodomesticos[i].nome);

        printf("Potencia em W de [%s]: ", eletrodomesticos[i].nome);
        scanf("%f", &eletrodomesticos[i].potencia);
        fflush(stdin);

        printf("Digite o tempo ativo por dia desse produto em horas: ");
        scanf("%f", &eletrodomesticos[i].uso_por_dia);
        fflush(stdin);
        printf("\n");

    }

    float tempo; // tempo em dias
    printf("Digite o tempo (em dias): ");
    scanf("%f", &tempo);
    printf("\n");

    // calcula o consumo total na casa
    float consumo_total = 0;
    for (int i = 0; i < SIZE; i++) {
        consumo_total += eletrodomesticos[i].potencia * eletrodomesticos[i].uso_por_dia * tempo;
    }
    printf("Consumo total na casa: %.3f kW\n", consumo_total);

    // calcula e mostra o consumo relativo de cada eletrodoméstico
    for (int i = 0; i < SIZE; i++) {
        float consumo_relativo = (100.0 * eletrodomesticos[i].potencia * eletrodomesticos[i].uso_por_dia * tempo) / consumo_total;
        printf("Consumo relativo de %s: %.2f%%\n", eletrodomesticos[i].nome, consumo_relativo);
    }

    printf("\n\n");
}