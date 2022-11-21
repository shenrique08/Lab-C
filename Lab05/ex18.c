#include <stdio.h>

int exponenciacao(int x, int z)
{
    int resultado = 1;

    for (int i = 1; i <= z; i++) {
        resultado *= x;
    }

    return resultado;

}

void main()
{
    int a, b;

    printf("Digite o valor da base: ");
    scanf("%d", &a);

    printf("Digite o valor do expoente: ");
    scanf("%d", &b);

    printf("%d", exponenciacao(a, b));

}   