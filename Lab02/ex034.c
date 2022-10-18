#include <stdio.h>
int main()
{
    float raio, area;
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);
    area = 3.141592 * (raio * raio);
    printf("A area do circulo de raio %.1f eh %.4f", raio, area);
    return 0;

}
