#include <stdio.h>
int main()
{
    float n1, n2, n3, soma_dos_quadrados;
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);
    soma_dos_quadrados = (n1 * n1) + (n2 * n2) + (n3 * n3);
    printf("A soma dos quadrados dos tres numeros fornecidos eh %.1f", soma_dos_quadrados);
    return 0;

}
