/*
Escreva um programa que receba 
uma string S e inteiros não-negativos I e J 
e imprima o segmento S[I..J].
*/
#include <stdio.h>
#include <string.h>

void main()
{
    char S[20];
    int valor[2][2];
    int i, j;

    printf("Digite uma palavra: ");
    gets(S);
    fflush(stdin);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o valor positivo da matriz de posicao [%d][%d] ", i, j);
            scanf("%d", &valor[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (j == 0)
                printf("%s ", S);
            printf("[%3d] ", valor[i][j]);

        }
    printf("\n");
    }
}
