/*
Ler o nome e o valor de uma determinada mercadoria de uma loja. 
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, 
calcular o valor a ser pago à vista. Escrever o nome da mercadoria, 
o valor total, o valor do desconto e o valor a ser pago à vista.
*/
#include <stdio.h>
#include <string.h>

void main()
{
    char nome_mercadoria[30];
    float valor_mercadoria;

    printf("Digite o nome da mercadoria: ");
    gets(nome_mercadoria);
    fflush(stdin);

    printf("Digite o valor da mercadoria: R$");
    scanf("%f", &valor_mercadoria);

    float valor_do_desconto = valor_mercadoria * 0.1;
    float valor_a_vista = valor_mercadoria * 0.9;

    printf("O nome da mercadoria eh [%s]", nome_mercadoria);
    printf("O valor total do produto eh R$[%.3f]\n", valor_mercadoria);
    printf("O valor do desconto eh¨R$[%.3f] \n", valor_do_desconto);
    printf("O valor a vista a ser pago eh R$[%.3f]", valor_a_vista);

}