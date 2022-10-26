#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal_atual, temp_servico;

    printf("Digite seu salario atual: R$ ");
    scanf("%f", &sal_atual);
    printf("Digite o tempo de servico em anos: ");
    scanf("%f", &temp_servico);

    if (sal_atual <= 500) {
        printf("Com o reajuste, seu novo salario sera de R$%.3f ", (sal_atual * 1.25));

        if (temp_servico < 1) {
            printf("\nSem bonus");

        } else if (temp_servico >= 1 && temp_servico <= 3) {
            printf("\nBonus de R$100,00");

        } else if (temp_servico >= 4 && temp_servico <= 6) {
            printf("\nbonus de R$200,00");

        } else if (temp_servico >= 7 && temp_servico <= 10) {
            printf("\nbonus de R$300,00");

        } else {
            printf("\nbonus de R$500,00");

        }

    } else if (sal_atual <= 500) {
        printf("Com o reajuste, seu novo salario sera de R$%.3f ", (sal_atual * 1.2));

        if (temp_servico < 1) {
            printf("\nSem bonus");

        } else if (temp_servico >= 1 && temp_servico <= 3) {
            printf("\nBonus de R$100,00");

        } else if (temp_servico >= 4 && temp_servico <= 6) {
            printf("\nbonus de R$200,00");

        } else if (temp_servico >= 7 && temp_servico <= 10) {
            printf("\nbonus de R$300,00");

        } else {
            printf("\nbonus de R$500,00");
            
        }

    } else if (sal_atual <= 1500) {
        printf("Com o reajuste, seu novo salario sera de R$%.3f ", (sal_atual * 1.15));

        if (temp_servico < 1) {
            printf("\nSem bonus");

        } else if (temp_servico >= 1 && temp_servico <= 3) {
            printf("\nBonus de R$100,00");

        } else if (temp_servico >= 4 && temp_servico <= 6) {
            printf("\nbonus de R$200,00");

        } else if (temp_servico >= 7 && temp_servico <= 10) {
            printf("\nbonus de R$300,00");

        } else {
            printf("\nbonus de R$500,00");
            
        }

    } else if (sal_atual <= 2000) {
        printf("Com o reajuste, seu novo salario sera de R$%.3f ", (sal_atual * 1.1));

        if (temp_servico < 1) {
            printf("\nSem bonus");

        } else if (temp_servico >= 1 && temp_servico <= 3) {
            printf("\nBonus de R$100,00");

        } else if (temp_servico >= 4 && temp_servico <= 6) {
            printf("\nbonus de R$200,00");

        } else if (temp_servico >= 7 && temp_servico <= 10) {
            printf("\nbonus de R$300,00");

        } else {
            printf("\nbonus de R$500,00");
            
        }

    } else if (sal_atual > 2000) {
        printf("Voce nao recebera ajuste no salario");

        if (temp_servico < 1) {
            printf("\nSem bonus");

        } else if (temp_servico >= 1 && temp_servico <= 3) {
            printf("\nBonus de R$100,00");

        } else if (temp_servico >= 4 && temp_servico <= 6) {
            printf("\nbonus de R$200,00");

        } else if (temp_servico >= 7 && temp_servico <= 10) {
            printf("\nbonus de R$300,00");

        } else {
            printf("\nbonus de R$500,00");
            
        }  

    }

    return 0;

}