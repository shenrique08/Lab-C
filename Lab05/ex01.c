#include <stdio.h>

int dobro(int numero)
{
    return numero * 2;

}

int main()
{
    int num, duplicado;

    printf("Digite um valor: ");
    scanf("%d", &num);

    duplicado = dobro(num);

    printf("Seu dobro eh %d", duplicado);

    return 0;

}