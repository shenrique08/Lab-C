#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592
int main()
{
    float h, r, v;
    printf("Qual e a altura do cilindro (m)? ");
    scanf("%f", &h);
    printf("Qual e o raio do cilindro (m)? ");
    scanf("%f", &r);
    v = PI * sqrt(r) * h;
    printf("O volume desse cilindro eh %.6fm³", v);
    return 0;

}
