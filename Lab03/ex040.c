#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custo_fabrica, custo_consumidor;

    printf("Digite o custo de fabrica do carro: R$");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000) {
        custo_consumidor = (custo_fabrica) + (custo_fabrica * 0.05);
        printf("O custo do consumidor eh R$%.3f", custo_consumidor);

    } else if (custo_fabrica > 12000 && custo_fabrica <= 25000) {
        custo_consumidor = (custo_fabrica) + (custo_fabrica * 0.10) + (custo_fabrica * 0.15);
        printf("O custo do consumidor eh R$%.3f", custo_consumidor);

    } else if (custo_fabrica > 25000) {
        custo_consumidor = (custo_fabrica) + (custo_fabrica * 0.15) + (custo_fabrica * 0.20);
        printf("O custo do consumidor eh R$%.3f", custo_consumidor);

    }

    return 0;
    
}