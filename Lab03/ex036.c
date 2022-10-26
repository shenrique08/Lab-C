#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_venda, comissao;

    printf("Digite o valor da venda: R$ ");
    scanf("%f", &valor_venda);
    
    if (valor_venda >= 100000) {
        printf("Sua comissao eh %.3fR$", (700) + (valor_venda * 0.16));

    } else if (valor_venda < 100000 && valor_venda >= 80000) {
        printf("Sua comissao eh %.3fR$", (650) + (valor_venda * 0.14));

    } else if (valor_venda < 80000 && valor_venda >= 60000) {
        printf("Sua comissao eh %.3fR$", (600) + (valor_venda * 0.14));

    } else if (valor_venda < 60000 && valor_venda >= 40000) {
        printf("Sua comissao eh %.3fR$", (550) + (valor_venda * 0.14));

    } else if (valor_venda < 40000 && valor_venda >= 20000) {
        printf("Sua comissao eh %.3fR$", (500) + (valor_venda * 0.14));

    } else if (valor_venda < 20000) {
        printf("Sua comissao eh %.3fR$", (400) + (valor_venda * 0.14));

    }

    return 0;
    
}