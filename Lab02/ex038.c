#include <stdio.h>
#include <stdlib.h>
int main()
{
    float sal_ini, sal_fin;
    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &sal_ini);
    sal_fin = sal_ini * 1.25;
    printf("Com o aumento de 25%%, o novo salario eh %.2fR$", sal_fin);
    return 0;

}
