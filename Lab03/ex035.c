#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes, dia_mes;
    char ano_bissexto;

    printf("Digite o mes em inteiro: ");
    scanf("%d", &mes);
    printf("Digite o dia do mes: ");
    scanf("%d", &dia_mes);
    fflush(stdin);
    printf("O ano eh bissexto? [S/N] ");
    scanf("%c", &ano_bissexto);

    if (ano_bissexto == 'N') {
        if (mes >= 1 && mes <= 12) {

            if (mes == 1 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 2 && dia_mes >= 1 && dia_mes <= 28) {
                printf("DATA VALIDA");

            } else if (mes == 3 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 4 && dia_mes >= 1 && dia_mes <= 30) {
                printf("DATA VALIDA");

            } else if (mes == 5 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 6 && dia_mes >= 1 && dia_mes <= 30) {
                printf("DATA VALIDA");

            } else if (mes == 7 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 8 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 9 && dia_mes >= 1 && dia_mes <= 30) {
                printf("DATA VALIDA");

            } else if (mes == 10 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 11 && dia_mes >= 1 && dia_mes <= 30) {
                printf("DATA VALIDA");

            } else if (mes == 12 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else {
                printf("DATA INVALIDA");

            }
        
        } else {
            printf("MES INVALIDO");

        }
    } else if (ano_bissexto == 'S') {

        if (mes >= 1 && mes <= 12) {

            if (mes == 1 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 2 && dia_mes >= 1 && dia_mes <= 29) {
                printf("DATA VALIDA");

            } else if (mes == 3 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 4 && dia_mes >= 1 && dia_mes <= 30) {
                printf("DATA VALIDA");

            } else if (mes == 5 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 6 && dia_mes >= 1 && dia_mes <= 30) {
                printf("DATA VALIDA");

            } else if (mes == 7 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 8 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 9 && dia_mes >= 1 && dia_mes <= 30) {
                printf("DATA VALIDA");

            } else if (mes == 10 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else if (mes == 11 && dia_mes >= 1 && dia_mes <= 30) {
                printf("DATA VALIDA");

            } else if (mes == 12 && dia_mes >= 1 && dia_mes <= 31) {
                printf("DATA VALIDA");

            } else {
                printf("DATA INVALIDA");
            }
        
        } else {
            printf("MES INVALIDO");

        }
    } else {
        printf("Digite uma resposta valida! ");

    }   

    return 0;
}