#include <stdio.h>

void desenho_triangulo(int n)
{

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
void main()
{
    int tamanho;

    printf("Qual o tamanho do triangulo? ");
    scanf("%d", &tamanho);

    desenho_triangulo(tamanho);

}
