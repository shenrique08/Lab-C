#include <stdio.h>
#include <stdlib.h>
#define ano_atual 2022

int main()
{
    int dia, mes, ano;

    printf("Digite o ano em que voce nasceu: ");
    scanf("%d", &ano);
    printf("Digite o mes em que voce nasceu: ");
    scanf("%d", &mes);
    printf("Digite o dia em que voce nasceu: ");
    scanf("%d", &dia);
    
    
    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) {
        if (mes == 2 && dia > 29) {
            printf("DATA INVALIDA"); 

        } else if (mes == 2 && dia <= 29) {
            printf("DATA VALIDA");
        }     
          
    }else {
        if (dia < 0 || dia > 31) {
        printf("DATA INVALIDA");

        } else if (ano >= ano_atual) {
        printf("DATA INVALIDA");

        } else if (mes > 12 || mes < 1) {
        printf("DATA INVALIDA");

        } else if (mes == 2 && dia > 28) {
        printf("DATA INVALIDA");
                    
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30) {
        printf("DATA VALIDA");

        } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia <= 31) {
        printf("DATA VALIDA");

        } 
    }
    printf("\nPROGRAMA ENCERRADO");

    return 0;

}