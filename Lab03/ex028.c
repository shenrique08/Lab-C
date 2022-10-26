#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, x3;
    char opcao;

    printf("Digite tres numeros inteiros: \n");
    scanf("%f %f %f", &x1, &x2, &x3);
    fflush(stdin);
    printf("Digite qual media deseja calcular: [a] - Geometrica, [b] Ponderada, [c] - Harmonica, [d] - Aritmetica; ");
    scanf("%c", &opcao);

    float med_geo, med_pond, med_harm, med_arit;

    med_geo = cbrt(x1 * x2 * x3);
    med_pond = ((x1 + 2) * (x2 + 3) * (x3));
    med_harm = 1 / ((1 / x1) + (1 / x2) + (1 / x3));
    med_arit = (x1 + x2 + x3) / 3;

    switch (opcao) {
        
        case 'a':
            printf("%.2f", med_geo);
            break;
        case 'b':
            printf("%.2f", med_pond);
            break;
        case 'c':
            printf("%.2f", med_harm);
            break;
        case 'd':
            printf("%.2f", med_arit);
            break;
        default:
            printf("Digite uma opcao valida!");
            break;

    }

    return 0;

}