#include <stdio.h>

void desenho_bisonho(int n)
{

    for (int i = 1; i <= n; i++){       
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--){    
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
}
void main()
{
    int altura;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    desenho_bisonho(altura);

}