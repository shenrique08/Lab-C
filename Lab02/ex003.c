#include <stdio.h>
int main()
{
    int n1, n2, n3, soma;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &n3);
    soma = n1 + n2 + n3;
    printf("A soma dos tres valores digitados eh %d", soma);
    return 0;

}
