#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso, imc;

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Abaixo do Peso");

    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Saudavel");

    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Peso em excesso");

    } else if (imc >= 30 && imc <= 34.9) {
        printf("Obesidade Grau I");

    } else if (imc >= 35 && imc <= 39.9) {
        printf("Obesidade Grau II (severa)");

    } else if (imc >= 40) {
        printf("Obesidade Grau III (morbida)");

    }

    return 0;
    
}