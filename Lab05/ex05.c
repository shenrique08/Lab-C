#include <stdio.h>
#define pi 3.1415
#include <math.h>

void volume_esfera(double raio)
{
    double volume = (4.0 / 3.0) * ( (pi) * (pow(raio, 3)) );
    printf("O volume da esfera em metros cubicos eh %.3lf", volume);


}   

int main()
{
    double radius;
    

    printf("Digite o raio da esfera: ");
    scanf("%lf", &radius);   

    volume_esfera(radius);

    return 0;

}