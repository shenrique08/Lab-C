#include <stdio.h>

int fatorial(int n)
{
    if (n == 0) {
        return 1;

    } else {
        int f = 1;

        for (int i = 1; i <= n; i++) {
            f = f * i;

        }
        
        return f;
    }
}
void main()
{
    int numero;

    printf("Digite o valor do fatorial que deseja saber: ");
    scanf("%d", &numero);

    printf("O fatorial de %d eh %d", numero, fatorial(numero));

    
}