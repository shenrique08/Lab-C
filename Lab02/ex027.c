#include <stdio.h>
int main()
{
    float hectares, metros;
    printf("Digite um valor em hectares: ");
    scanf("%f", &hectares);
    metros = hectares * 10000;
    printf("O valor digitado em metros quadrados eh %.2f", metros);
    return 0;

}
