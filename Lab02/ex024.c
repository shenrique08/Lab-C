#include <stdio.h>
int main()
{
    float area_metros, area_acres;
    printf("Digite um valor de area em metros quadrados: ");
    scanf("%f", &area_metros);
    area_acres = area_metros * 0.000247;
    printf("O valor digitado em acres eh %.5f", area_acres);
    return 0;

}
