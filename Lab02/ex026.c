#include <stdio.h>
int main()
{
    float metros, hectares;
    printf("Digite um valor em metros quadrados: ");
    scanf("%f", &metros);
    hectares = metros * 0.0001;
    printf("O valor fornecido em hectares eh %.2f", hectares);
    return 0;

}
