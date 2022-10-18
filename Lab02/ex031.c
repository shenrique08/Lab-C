#include <stdio.h>
int main()
{
    int n, sucessor, antecessor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    sucessor = n + 1;
    antecessor = n - 1;
    printf("O sucessor de %d eh %d, e seu antecessor eh %d", n, sucessor, antecessor);
    return 0;

}
