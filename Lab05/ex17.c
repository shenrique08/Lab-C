#include <stdio.h>

int soma_entre_numeros(int a, int b)
{
    int soma = 0;

    for (int i = a + 1; i < b; i++) {
        printf("[%d] ", i);
        soma += i;

    }
    printf("<- Valores entre %d e %d\n", a, b);

    return soma;

}

void main()
{
    int n1, n2, sum;

    printf("Digite o valor inicial: ");
    scanf("%d", &n1);

    printf("Digite o valor final: ");
    scanf("%d", &n2);

    printf("A soma dos valores eh %d", soma_entre_numeros(n1, n2));
    
}