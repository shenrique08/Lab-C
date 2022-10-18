#include <stdio.h>
int main()
{
    float metros, jardas;
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);
    jardas = metros / 0.91;
    printf("O valor digitado em jardas eh %.2f", jardas);
    return 0;

}
