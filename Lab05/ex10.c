#include <stdio.h>

int maior_numero(int n1, int n2)
{
    if (n1 > n2) {
        return n1;

    } else if (n2 > n1) {
        return n2;

    } 
}

void main()
{
    int num1, num2, maior;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &num1, &num2);

    maior = maior_numero(num1, num2);

    printf("O maior numero eh %d", maior);

}