#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Digite os valores dos lados do triangulo: \n");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a < b + c && b < a + c && c < a + b) {

        if (a == b && b == c) {
            printf("Esse eh um triangulo equilatero");
        } else if (a == b && b != c || a == c && c != b) {
            printf("Esse triangulo eh isosceles");
        } else if (a != b && b != c) 
            printf("Esse triangulo eh escaleno"); 

    } else {
        printf("Esse triangulo nao existe");

    }
    return 0;

}