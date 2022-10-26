#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Digite um numero entre 1 e 7: ");
    scanf("%d", &n1);
    switch (n1)
    {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terca-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sábado");
            break;
        default:
            printf("ERROR... Tente novamente");
            break;
    }
    return 0;

}