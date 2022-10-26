#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float h, peso, mulheres, homens;
    printf("Digite o seu sexo: [F/M] ");
    scanf("%c", &sexo);
    printf("Digite a sua altura em metros: ");
    scanf("%f", &h);
    
    if (sexo == 70 || sexo == 102) {
        mulheres = (62.1 * h) - 44.7;
        printf("O seu peso ideal eh %.2f", mulheres);
    }
    else if (sexo == 109 || sexo == 77) {
        homens = (72.7 * h) - 58;
        printf("O seu peso ideal eh %.2f", homens);

    }
    return 0;

}