#include <stdio.h>
#include <string.h>

void main()
{

    char S1[20], S2[22];
    char C1, C2, caractere;
    char opcao;
    int i, cont_caracter = 0;

    printf("Digite a string S1(maximo de 20 caracteres) ");
    fgets(S1, 20, stdin);

    printf("Digite a string S2(maximo de 20 caracteres) ");
    fgets(S2, 20, stdin);

    int len = strlen(S1);

    printf("\n\t\tMENU PE DE MAMAO\n\n");

    printf("(b) Imprimir o tamanho da string [S1] \n");
    printf("(c) Comparar a string [S1] com uma nova string [S2] e imprimir o resultado da comparaçao; \n");
    printf("(d) Concatenar a string [S1] com uma nova string [S2] e imprimir na tela o resultado da concatenacao\n");
    printf("(e) Imprimir a string [S1] de forma reversa\n");
    printf("(f) Contar quantas vezes um dado caractere aparece na string [S1].\n");
    printf("(g) Substituir a primeira ocorrencia do caractere [C1] da string [S1] pelo caractere [C2]\n");
    fflush(stdin);
    scanf("%c", &opcao);
    fflush(stdin);

    switch (opcao)
    {
        case 'b':
            printf("O tamanho da string eh [%d]", strlen(S1));
            break;
        case 'c':
            if (strcmp(S1, S2) == 0)
                printf("Strings iguais");
            else 
                printf("Strings diferentes");
            break;
        case 'd':
            strcat(S1, S2);
            printf("%s", S1);
            break;
        case 'e':

            for (i = len; i >= 0; i++) {
                printf("%c", S1[i]);
            }
            break;
        case 'f':

            printf("Digite o caractere: ");
            fflush(stdin);
            scanf("%c", &caractere);
            for (i = 0; i < len; i++) {
                if (S1[i] == caractere)
                    cont_caracter += 1;
            }

            printf("O caractere [%c] aparece %i vez(es) na S1", caractere, cont_caracter);
            break;
        case 'g':
            printf("Digite o caractere C1: ");
            scanf("%c", &C1);
            fflush(stdin);
            printf("Digite o caractere C2: ");
            scanf("%c", &C2);

            for (i = 0; i < len; i++) {
                if (S1[i] == C1)
                    S1[i] = C2;
            }
            printf("Nova string: %s", S1);
            break;
    }
} 