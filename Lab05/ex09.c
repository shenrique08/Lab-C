#include <stdio.h>
#define pi 3.141592

float volume_cilindro(float altura, float raio)
{
    float volume = ((pi) * (raio * raio)) * altura;

    return volume;

}

void main()
{
    float h, r, v;

    printf("Digite o valor da altura em metros do cilindro: ");
    scanf("%f", &h);
    printf("Digite o valor do raio em metros do cilindro: ");
    scanf("%f", &r);

    v = volume_cilindro(h, r);

    printf("O volume do cilindro em metros cubicos eh %.3f", v);

}