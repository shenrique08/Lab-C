#include <stdio.h>
int main()
{
    float jardas, metros;
    printf("Digite um valor de comprimento em jardas: ");
    scanf("%f", &jardas);
    metros = 0.91 * jardas;
    printf("O valor digitado em metros eh %.3f", metros);
    return 0;

}
