#include <stdio.h>
int main()
{
    float area_acres, area_metros;
    printf("Digite um valor de area em acres: ");
    scanf("%f", &area_acres);
    area_metros = area_acres * 4048.58;
    printf("O valor de area digitado em metros quadrados eh %.5f", area_metros);
    return 0;

}
