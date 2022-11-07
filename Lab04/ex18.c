#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    double salario = 2000;
    double aumento_salario = salario * 0.015;

    printf("Ano [1995]\t Salario [R$%.3lf]\n", salario);
    
    for (ano = 1996; ano <= 2022; ano++) {
        salario += aumento_salario;
        aumento_salario *= 2;      

        printf("Ano [%d]\t Salario [R$%.3lf]\n", ano, salario);
    }

    printf("\nSalario em 2022 eh R$%.3lf\n\n", salario);

    return 0;

}
/* Resolução alternativa

#include <stdio.h>
#include <math.h>

int main(){
	int nro_aumentos = 2022-1996+1;
	
	printf("%lf\n", pow(2, nro_aumentos)*30+2000);
	
	return 0;
}
*/