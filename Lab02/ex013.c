#include <stdio.h>
int main()
{
    float km, milhas;
    printf("Digite uma distancia em quilometros: ");
    scanf("%f", &km);
    milhas = km / 1.61;
    printf("Essa distancia em milhas eh %.2f", milhas);
    return 0;

}
