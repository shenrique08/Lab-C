#include <stdio.h>
int main()
{
    float radianos, graus;
    printf("Digite o valor do angulo em radianos: ");
    scanf("%f", &radianos);
    graus = radianos * 180 / 3.14;
    printf("O valor digitado em graus eh %.2f", graus);
    return 0;

}
