#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base_maior, base_menor, h, area;
        printf("Digite o valor da base maior do trapezio: ");
        scanf("%f", &base_maior);
        printf("Digite o valor da base menor do trapezio: ");
        scanf("%f", &base_menor);
        printf("Digite o valor da altura do trapezio: ");
        scanf("%f", &h);
    if (base_maior > 0 && base_menor > 0 && h > 0) {
        area = ((base_maior + base_menor) * h) / 2;
        printf("A area desse trapezio eh %.2f", area);
        
    } else {
        printf("Voce digitou um valor invalido. Tente da proxima vez!");
    }
    return 0;

}