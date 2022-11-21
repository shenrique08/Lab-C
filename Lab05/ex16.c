#include <stdio.h>

void desenha_linha(int quantidade)
{
    for (int i = 1; i <= quantidade; i++) {

        printf("=");        
    }   
    

}
void main()
{
    int quant_simb;

    printf("Quantos simbolos deseja imprimir? ");
    scanf("%d", &quant_simb);

    desenha_linha(quant_simb);

}