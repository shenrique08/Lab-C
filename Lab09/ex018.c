#include <stdio.h>
#define PI 3.1415

void calc_esfera(float R, float *area, float *volume)
{
    *area = (4 * PI) * (R * R);
    *volume = (4/3) * (PI) * (R * R * R); 

}
void main()
{
    float raio, area, volume;

    printf("Digite o raio da esfera em metros quadrados: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area da superficie da esfera em metros quadrados: %f\n", area);
    printf("Volume da esfera em metros cubicos: %f\n\n", volume);

}