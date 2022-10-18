#include <stdio.h>
int main()
{
    float celsius, kelvin;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("Essa temperatura em kelvin eh %f", kelvin);
    return 0;

}
