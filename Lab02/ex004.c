#include <stdio.h>
int main()
{
    float n, quadrado;
    printf("Digite um numero qualquer: ");
    scanf("%f", &n);
    quadrado = n * n;
    printf("O quadrado do numero digitado eh %.1f", quadrado);
    return 0;
}
