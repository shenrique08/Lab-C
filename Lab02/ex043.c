#include <stdio.h>
#include <stdlib.h>
int main()
{
    float total, total_desconto10, parcela, comiss_vend1, comiss_vend2;
    printf("Digite o valor em R$: ");
    scanf("%f", &total);
    total_desconto10 = total * 0.90;
    parcela = total / 3;
    comiss_vend1 = total_desconto10 * 0.05;
    comiss_vend2 =  total * 0.05;
    printf("O valor total a pagar com 10%% de desconto eh %.2fR$\n", total_desconto10);
    printf("O valor de cada parcela eh %.2fR$\n", parcela);
    printf("A comissao caso a venda seja a vista eh %.2fR$\n", comiss_vend1);
    printf("A comissao caso a venda seja parcelada eh %.2fR$\n", comiss_vend2);
    return 0;

}
