#include <stdio.h>
int main()
{
    float m, km;
    printf("Digite uma velocidade em metros por segundo: ");
    scanf("%f", &m);
    km = m * 3.6;
    printf("Essa velocidade em quilometros por hora eh %.2f", km);
    return 0;

}
