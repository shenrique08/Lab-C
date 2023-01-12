#include <stdio.h>

int ordena(int *valor1, int *valor2, int *valor3)
{
    if (*valor1 == *valor2 && *valor1 == *valor3) {
        return 1;

    } else {
        int maior, medio, menor;

        if ((*valor3 > *valor2) && (*valor3 > *valor1) && (*valor2 > *valor1)) {
            maior = *valor3;
            medio = *valor2;
            menor = *valor1;
            *valor1 = maior;
            *valor2 = medio;
            *valor3 = menor;
            return 0;

        } else if ((*valor3 > *valor2) && (*valor3 > *valor1) && (*valor1 > *valor2)) {
            maior = *valor3;
            medio = *valor1;
            menor = *valor2;
            *valor1 = maior;
            *valor2 = medio;
            *valor3 = menor;
            return 0;

        } else if ((*valor2 > *valor1) && (*valor2 > *valor3) && (*valor1 > *valor3)) {
            maior = *valor2;
            medio = *valor1;
            menor = *valor3;
            *valor1 = maior;
            *valor2 = medio;
            *valor3 = menor;
            return 0;

        } else if ((*valor2 > *valor1) && (*valor2 > *valor3) && (*valor3 > *valor1)) {
            maior = *valor2;
            medio = *valor3;
            menor = *valor1;
            *valor1 = maior;
            *valor2 = medio;
            *valor3 = menor;
            return 0;

        } else if ((*valor1 > *valor3) && (*valor3 > *valor2)) {
            maior = *valor1;
            medio = *valor3;
            menor = *valor2;
            *valor1 = maior;
            *valor2 = medio;
            *valor3 = menor;
            return 0;

        } else {
            return 0;
        }
    }
}

void main()
{
    int num1, num2, num3;

    printf("Digite tres valores: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("\nValores antes da ordenacao: \n");
    printf("Valor1 = [%d]\t Valor2 = [%d]\t Valor3 = [%d]\n", num1, num2, num3);

    ordena(&num1, &num2, &num3);

    printf("\nValores apos a ordenacao: \n\n");
    printf("Valor1 = [%d]\t Valor2 = [%d]\t Valor3 = [%d]\n\n", num1, num2, num3);

}