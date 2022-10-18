#include <stdio.h>
#include <stdlib.h>
int main()
{
    float dias, pagamento;
    printf("Quantos dias o encanador trabalhou? ");
    scanf("%f", &dias);
    pagamento = (30 * dias) * 0.92;
    printf("O valor a receber, descontando o imposto de renda eh %.3fR$", pagamento);
    return 0;

}
