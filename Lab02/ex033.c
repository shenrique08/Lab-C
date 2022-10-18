#include <stdio.h>
int main()
{
    float lado, area;
    printf("Digite o do lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("A area do quadrado de lado %.1f eh %.1f", lado, area);
    return 0;

}
