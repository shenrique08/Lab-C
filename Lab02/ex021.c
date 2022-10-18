#include <stdio.h>
int main()
{
    float lb, kg;
    printf("Digite um valor em libras: ");
    scanf("%f", &lb);
    kg = lb * 0.45;
    printf("O valor digitado em quilogramas eh %.3f", kg);
    return 0;

}
