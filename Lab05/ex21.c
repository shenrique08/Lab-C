#include <stdio.h>

void exclamacao(int n)
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("!");

        }

    printf("\n");

    }
}

void main()
{
    int quantidade;

    printf("Quantas linhas deseja gerar? ");
    scanf("%d", &quantidade);

    exclamacao(quantidade);

}