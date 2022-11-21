#include <stdio.h>
#include <math.h>

void quadrado_perfeito(int num1)
{
    int raiz_quadrada;
    raiz_quadrada = sqrt(num1);

    // Como o valor da variável é inteiro, vai haver um arredondamento caso o valor da raíz não seja inteiro
    // Por exemplo, se num1 receber 15, o valor armazenado será 4, mas 4 * 4 != 15

    if ((raiz_quadrada * raiz_quadrada) == num1) {
        printf("O numero %d eh um quadrado perfeito", num1);

    } else {
        printf("O numero %d nao eh um quadrado perfeito", num1);

    }


}

int main()
{
    int numero;

    do {
        printf("Digite um numero inteiro maior que zero: ");
        scanf("%d", &numero);

    } while (numero < 0);
    

    quadrado_perfeito(numero);

    return 0;

}