#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, log;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    if (n1 < 0) {
        printf("NUMERO INVALIDO");

    } else {
        log = log10(n1);
        printf("O logaritmo de %d eh %d", n1, log);

    }
    return 0;

}