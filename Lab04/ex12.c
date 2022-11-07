#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    int soma_divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--) {
        if (num % i == 0) {
            printf("%d ", i);
            soma_divisores += i;
        }
    }
    
    printf(" <- Seus divisores");
    printf("\nA soma dos divisores do numero %d eh %d", num, (soma_divisores - num));

    return 0;
    
}