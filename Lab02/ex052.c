#include <stdio.h>
#include <stdlib.h>

int main()

{
    float n1, n2, n3, proporcao1, proporcao2, proporcao3, valor_premio;
    printf("Digite o valor do investimento do primeiro amigo: R$");
    scanf("%f", &n1);
    printf("Digite o valor do investimento do segundo amigo: R$");
    scanf("%f", &n2);
    printf("Digite o valor do investimento do terceiro amigo: R$");
    scanf("%f", &n3);
    printf("Digite o valor do premio: R$");
    scanf("%f", &valor_premio);
    proporcao1 = n1 / valor_premio;
    proporcao2 = n2 / valor_premio;
    proporcao3 = n3 / valor_premio;
    float novo_n1, novo_n2, novo_n3;
    novo_n1 = proporcao1 * valor_premio;
    novo_n2 = proporcao2 * valor_premio;
    novo_n3 = proporcao3 * valor_premio;
    printf("Caso o valor do premio fosse %.2fR$ O amigo 1 ganharia %.2fR$, o amigo 2 ganharia %.2fR$ e o amigo 3 ganharia %.2fR$",
           valor_premio, novo_n1, novo_n2, novo_n3);
   return 0;

}
