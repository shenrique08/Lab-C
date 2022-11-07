#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    int c = 0;


    printf("Digite o numero de linhas para o Triangulo de Floyd: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= i; j++) {
            c += 1;
            printf("%d ", c);

        }
        printf("\n");
    }

    return 0;

}