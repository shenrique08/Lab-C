#include <stdio.h>
#include <stdlib.h>

int main()

{
    float num, h, min;
    printf("Digite um valor em segundos: ");
    scanf("%f", &num);
    h = num / 3600;
    min = num / 60;
    printf("O valor digitado em horas eh %.5f, em minutos eh %.5f e em segundos eh %.1f",
           h, min, num);

   return 0;

}
