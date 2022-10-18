#include <stdio.h>
int main()
{
    float graus, radianos;
    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);
    radianos = graus * (3.14 / 180);
    printf("Esse angulo em radianos eh %.2f ", radianos);
    return 0;

}
