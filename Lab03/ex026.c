#include <stdio.h>
#include <stdlib.h>


int main()
{
    
    float distancia, litros, consumo;
    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);
    printf("Digite quantos litros de gasolina foram consumidos: ");
    scanf("%f", &litros);
    consumo = distancia / litros;
    if (consumo < 8) {
        printf("Venda o carro!");
    } else if (consumo >= 8 && consumo <= 14) {
        printf("Economico!");
    }else {
        printf("Super economico!");
    }

    return 0;

}