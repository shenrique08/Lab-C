#include <stdio.h>

void data_extenso(int dia, int mes, int ano)
{
    if (mes == 1) {
        printf("%d de Janeiro de %d", dia, ano);

    } else if (mes == 2) {
        printf("%d de Fevereiro de %d", dia, ano);

    } else if (mes == 3) {
        printf("%d de marco de %d", dia, ano);

    } else if (mes == 4) {
        printf("%d de Abril de %d", dia, ano);

    } else if (mes == 5) {
        printf("%d de Maio de %d", dia, ano);

    } else if (mes == 6) {
        printf("%d de Junho de %d", dia, ano);

    } else if (mes == 7) {
        printf("%d de Julho de %d", dia, ano);

    } else if (mes == 8) {
        printf("%d de Agosto de %d", dia, ano);

    } else if (mes == 9) {
        printf("%d de Setembro de %d", dia, ano);

    } else if (mes == 10) {
        printf("%d de Outubro de %d", dia, ano);

    } else if (mes == 11) {
        printf("%d de Novembro de %d", dia, ano);

    } else if (mes == 12) {
        printf("%d de Dezembro de %d", dia, ano);

    }
}

int main()
{
    int day, month, year, data_atual;

    printf("digite o dia: ");
    scanf("%d", &day);
    printf("Digite o mes: ");
    scanf("%d", &month);
    printf("Digite o ano: ");
    scanf("%d", &year);

    data_extenso(day, month, year);

    return 0;

}