#include <stdio.h>
int main()
{
    float km, ms;
    printf("Digite uma velocidade em quilometros por hora: ");
    scanf("%f", &km);
    ms = km / 3.6;
    printf("Essa velocidade em metros por segundo eh %.2f", ms);
    return 0;

}
