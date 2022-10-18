#include <stdio.h>
int main()
{
    float fahr, cels;
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &fahr);
    cels = 5 * (fahr - 32) / 9;
    printf("Essa temperatura em Celsius eh %.2f", cels);
    return 0;
}
