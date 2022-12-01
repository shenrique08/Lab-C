#include <stdio.h>

void main()
{
    float matriz_A[2][2], matriz_B[2][2], soma_matrizes[2][2], subt_matrizes[2][2];

    printf("\t\t   MATRIZ [1]\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o valor da matriz [1] para a posicao [%d] X [%d] ", i, j);
            scanf("%f", &matriz_A[i][j]);

        }
    }

    printf("\n\t\t   MATRIZ [2]\n");

    for (int k = 0; k < 2; k++) {
        for (int l = 0; l < 2; l++) {
            printf("Digite o valor da matriz [1] para a posicao [%d] X [%d] ", k, l);
            scanf("%f", &matriz_B[k][l]);
            
        }
    }

    printf("\n");

    char operando;
    float constante;

    do {
        printf("\n\t\tMENU DE OPCOES\n\n");
        printf("1 - Para somar as duas matrizes, digite \"[+]\" \n");
        printf("2 - Para subtrar as duas matrizes, digite \"[-]\" \n");
        printf("3 - Para adicionar uma constante as duas matrizes, digite \"[$]\" \n");
        printf("4 - Para imprimir as duas matrizes, digite \"[@]\" \n");
        fflush(stdin);
        scanf("%c", &operando);

    } while ((operando != '+') && (operando != '-') && (operando != '$') && (operando != '@'));
    
    switch (operando)
    {
    case '+':
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                soma_matrizes[i][j] = matriz_A[i][j] + matriz_B[i][j];

            }

        printf("\n");

        }

        printf("RESULTADO DA SOMA DAS MATRIZES\n");

        for (int k = 0; k < 2; k++) {
            for (int l = 0; l < 2; l++) {
                printf("[%7.2f]   ", soma_matrizes[k][l]);

            }

        printf("\n");

        }

        break;

    case '-':
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                subt_matrizes[i][j] = matriz_A[i][j] - matriz_B[i][j];

            }
        }

        printf("RESULTADO DA SUBTRACAO DAS MATRIZES\n");

        for (int k = 0; k < 2; k++) {
            for (int l = 0; l < 2; l++) {
                printf("[%7.2f]   ", subt_matrizes[k][l]);

            }

        printf("\n");

        }

        break;

    case '$':
        printf("Digite o valor da constante: ");
        scanf("%f", &constante);

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                matriz_A[i][j] = matriz_A[i][j] + constante;
                matriz_B[i][j] = matriz_B[i][j] + constante;
                
            }
        }

        printf("Matriz com constante %.2f adicionada\n");
        printf("\tMATRIZ [1]\n");

        for (int k = 0; k < 2; k++) {
            for (int l = 0; l < 2; l++) {
                printf("[%7.2f]   ", matriz_A[k][l]);

            }
        printf("\n");

        }

        printf("\tMATRIZ [2]\n");

        for (int k = 0; k < 2; k++) {
            for (int l = 0; l < 2; l++) {
                printf("[%7.2f]   ", matriz_B[k][l]);

            }

        printf("\n");

        }
        
        break;

    case '@':
        printf("\tMATRIZ [1]\n");

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                printf("[%7.2f]   ", matriz_A[i][j]);

            }

        printf("\n");

        }

        printf("\tMATRIZ [2]\n");

        for (int k = 0; k < 2; k++) {
            for (int l = 0; l < 2; l++) {
                printf("[%7.2f]   ", matriz_B[k][l]);

            }

        printf("\n");

        }

        break;

    }

    printf("\n");

}