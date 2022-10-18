#include <stdio.h>
int main()
{
    float cels, fahr;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &cels);
    fahr = (cels * 9 / 5)  + 32.0;
    printf("A temperatura em Fahrenheit eh: %.2f", fahr);
    return 0;
}
