#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    float x1, y1, x2, y2, distancia;
    printf("Digite a coordenada X: ");
    scanf("%f", &x2);
    printf("Digite a coordenada Y: ");
    scanf("%f", &y2);
    distancia = sqrt((x2 + y2));
    printf("A distancia das coordenadas (%.0f, %.0f) ate a origem (0, 0) eh %.2f",
           x2, y2, distancia);
   return 0;

}
