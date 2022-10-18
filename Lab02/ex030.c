#include <stdio.h>
int main()
{
    float real, cot_dolar, dolares;
    printf("Digite o valor em real: R$ ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar atual: ");
    scanf("%f", &cot_dolar);
    dolares = cot_dolar * real;
    printf("Esse valor em dolar eh %.2f$", dolares);
    return 0;

}
