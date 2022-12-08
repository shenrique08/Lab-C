/*
Faça um programa em que troque todas 
as ocorrências de uma letra L1 pela letra L2 em uma string. 
A string e as letras L1 e L2 devem ser fornecidas pelo usuário.
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char str[30];
    char letra1, letra2;

    printf("Digite uma palavra: ");
    fgets(str, 30, stdin);

    printf("Digite a LETRA 1: ");
    scanf("%c", &letra1);

    fflush(stdin);

    printf("Digite a LETRA 2: ");
    scanf("%c", &letra2);

    char len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == letra1) {
            str[i] = letra2;
        }
    }

    printf("A nova palavra digitada eh %s", str);

}