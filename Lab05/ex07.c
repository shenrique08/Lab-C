#include <stdio.h>

float conversao_temperatura(float F, float C)
{
    F = (C * (9.0 / 5.0)) + 32;

    return F;
    
}

int main()
{
    float f, c, farenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);

    farenheit = conversao_temperatura(f, c);

    printf("%.3f", farenheit);

    return 0;

}