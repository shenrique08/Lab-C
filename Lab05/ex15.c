#include <stdio.h>

void lados_triangulo(int lado1, int lado2, int lado3)
{

    if ( (lado1 < (lado2 + lado3)) && (lado2 < (lado1 + lado3)) && (lado3 < (lado1 + lado2)) ) {
            
            if ( (lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3) ) {
                printf("%d, %d, %d formam um triangulo equilatero", lado1, lado2, lado3);

            } else if ( (lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado2 == lado3 && lado2 != lado1)) {
                printf("%d, %d, %d formam um triangulo isoceles", lado1, lado2, lado3);

            } else if ((lado1 != lado2) && (lado1 != lado3)) {
                printf("%d, %d, %d formam um triangulo escaleno", lado1, lado2, lado3);

            }
    } else {
        printf("Os lados fornecidos nao formam um triangulo");

    }
}


void main()
{
    int a, b, c;

    printf("Digite tres valores para o lado de um triangulo: \n");
    scanf("%d %d %d", &a, &b, &c);

    lados_triangulo(a, b, c);

}