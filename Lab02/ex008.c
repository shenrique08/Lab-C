#include <stdio.h>
int main()
{
    float kelvin, cels;
    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f", &kelvin);
    cels = kelvin - 273.15;
    printf("Esse valor convertido para Celsius eh %.2f", cels);
    return 0;
}
