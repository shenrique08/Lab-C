#include <stdio.h>
int main()
{
    float milhas, km;
    printf("Digite uma ditancia em milhas: ");
    scanf("%f", &milhas);
    km = milhas * 1.61;
    printf("Essa distancia em quilometros eh %.2f", km);
    return 0;

}
