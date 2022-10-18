#include <stdio.h>
int main()
{
    float n, quinta_parte;
    printf("Digite um numero: ");
    scanf("%f", &n);
    quinta_parte = n / 5;
    printf("A quinta parte do numero digitado eh %.2f", quinta_parte);
    return 0;
}
