#include <stdio.h>
#include <stdlib.h>
int main()
{
    float valor, valor_desconto;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    valor_desconto = valor * 0.88;
    printf("Esse valor com desconto de 12%% eh %.2f", valor_desconto);
    return 0;

}
