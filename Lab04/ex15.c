#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i ;
    double num, cubo;


    do {
        printf("Digite um numero: [Digite um valor menor ou igual 0 para finalizar o programa] ");
        scanf("%lf", &num);

        if (num > 0) {
            cubo = pow(num, 3);

            printf("O quadrado desse numero eh %.2lf\n", (num * num));
            printf("O cubo desse numero eh %.2lf\n", cubo);
            printf("A raiz quadrada desse numero eh aproximadamente %.4lf\n", sqrt(num));
        }

    } while (num > 0);

    printf("Programa finalizado");

    return 0;

}