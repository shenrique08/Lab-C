#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    float quantidade;
    printf("Digite o codigo do produto: [100 - 106] ");
    scanf("%d", &cod);
    printf("Digite qual a quantidade que deseja: ");
    scanf("%f", &quantidade);

    switch (cod)
    {
        case 100:
            printf("O preco do Cachorro Quente eh [1,20 R$]. Como vc pediu %.0f, o valor total eh %.2fR$"
            , quantidade, (quantidade * 1.2));
            break;
        case 101:
            printf("O preco do Bauru Simples eh [1,30 R$]. Como vc pediu %.0f, o valor total eh %.2fR$"
            , quantidade, (quantidade * 1.3));
            break;
        case 102:
            printf("O preco do Bauru com Ovo eh [1,50 R$]. Como vc pediu %.0f, o valor total eh %.2fR$"
            , quantidade, (quantidade * 1.5));
            break;
        case 103:
            printf("O preco do Hamburguer eh [1,20 R$]. Como vc pediu %.0f, o valor total eh %.2fR$"
            , quantidade, (quantidade * 1.2));
            break;
        case 104:
            printf("O preco do Cheersburguer eh [1,70 R$]. Como vc pediu %.0f, o valor total eh %.2fR$"
            , quantidade, (quantidade * 1.7));
            break;
        case 105:
            printf("O preco do Suco eh [2,20 R$]. Como vc pediu %.0f, o valor total eh %.2fR$"
            , quantidade, (quantidade * 2.2));
            break;
        case 106:
            printf("O preco do Refrigerante eh [1,00 R$]. Como vc pediu %.0f, o valor total eh %.2fR$"
            , quantidade, (quantidade));
            break;
        default:
            printf("Erro! Digite um valor vallido");

    }
    return 0;
}