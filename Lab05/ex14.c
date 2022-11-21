#include <stdio.h>

void avaliacao_do_veiculo(float distancia, float litros_gasolina, float consumo)
{

    consumo = (distancia / litros_gasolina);

    printf("Consumo = %.3f km/l\n", consumo);

    if (consumo < 8) {
        printf("Venda o carro!");

    } else if (consumo > 8 && consumo < 14) {
        printf("Economico!");

    } else {
        printf("Super economico!");

    }
}

void main()
{
    float d, l, c;

    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &d);
    printf("Digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &l);

    avaliacao_do_veiculo(d, l, c);

}