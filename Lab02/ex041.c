#include <stdio.h>
#include <stdlib.h>
int main()
{
    float hr_de_trabalho, hr_trabalhadas, pagamento;
    printf("Qual e o valor da hora de trabalho? R$ ");
    scanf("%f", &hr_de_trabalho);
    printf("Quantas horas trabalhadas? ");
    scanf("%f", &hr_trabalhadas);
    pagamento = (hr_de_trabalho * hr_trabalhadas) * 1.10;
    printf("Com acrescimo de 10%%, o valor a ser recebido eh %2.fR$", pagamento);
    return 0;

}
