#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, raiz1, raiz2;

    printf("Digite o valor do \"A\" da funcao quadratica: ");
    scanf("%f", &a);
    printf("Digite o valor do \"B\" da funcao quadratica: ");
    scanf("%f", &b);
    printf("Digite o valor do \"C\" da funcao quadratica: ");
    scanf("%f", &c);
    if (a == 0)
    {
        printf("Com o \"A\" valendo 0, nao ha equacao do segundo grau! ");
    } else 
    {
        delta = (b * b) - (4 * a * c);
        raiz1 = ((-b + sqrt(delta)) / (2 * a));
        raiz2 = ((-b - sqrt(delta)) / (2 * a));
        if (delta < 0)
        {
            printf("Nao existe raiz real. ");
        } else if (delta == 0)
        {
            printf("Raiz unica = %.2f ", (raiz1 >= 0)?raiz1:raiz2);
        } else if (delta >= 0)
        {
            printf("Duas raizes reais = %.2f e %.2f ", raiz1, raiz2);
        }
    }

    return 0;

}