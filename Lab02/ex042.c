#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario, grat, imposto, novo_salario;
    printf("Qual e o salario-base do funcionario? R$");
    scanf("%f", &salario);
    grat = salario * 0.05;
    imposto = salario * 0.07;
    novo_salario = salario + grat - imposto;
    printf("o salario a receber eh %.2fR$", novo_salario);
    return 0;

}
