#include <stdio.h>
#include <stdlib.h>

int main()
{
    int estado;
    float valor;

    printf("Digite o valor correspondente ao estado do destino do produto: 1 -> [MG] 2 -> [SP] 3 -> [RJ] 4-> [MS] ");
    scanf("%d", &estado);
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);
    switch (estado)
    {
        case 1:
            printf("O valor final do produto para [MG] eh R$ %.3f ", (valor * 0.97));
            break;
        case 2:
            printf("O valor final do produto para [SP] eh R$ %.3f ", (valor * 0.88));
            break;
        case 3:
            printf("O valor final do produto para [RJ] eh R$ %.3f ", (valor * 0.85));
            break;
        case 4:
            printf("O valor final do produto para [MS] eh R$ %.3f ", (valor * 0.92));
        default:
            printf("ERROR... Digite um valor valido");
            break;
    }

    return 0;

}