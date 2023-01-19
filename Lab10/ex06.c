#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *memoria, tam_memoria;

    printf("Quantos bytes deseja alocar do tipo inteiro (inteiro = 4 bytes) ? ");
    scanf("%d", &tam_memoria);
    fflush(stdin);
    memoria = calloc(tam_memoria, sizeof(int));

    if (memoria == NULL) {
        printf("Alocacao de memoria mal sucedida!\n");
        exit(1);
    } else 
        printf("%d bytes alocados com sucesso!\n", tam_memoria * sizeof(memoria));


    char opcao;
    do {
        printf("\nPara inserir um valor em uma determinada posicao, digite [A]: \n");
        printf("Para consultar um valor em uma determinada posicao, digite [B]: \n");
        printf("Para encerrar o programa, digite [E]\n");
        scanf("%c", &opcao);

        int valor, pos_valor, pos_consulta;

        switch (opcao) 
        {
            case 'A':
                printf("Digite o valor que deseja inserir: ");
                scanf("%d", &valor);
                printf("Digite para qual posicao deseja inserir o [%d]: ", valor);
                scanf("%d", &pos_valor);
                fflush(stdin);

                memoria[pos_valor] = valor;
                break;

            case 'B':
                printf("Qual posicao da memoria deseja consultar o valor contido? ");
                scanf("%d", &pos_consulta);
                fflush(stdin);
                
                printf("Valor na posicao [%d] eh [%d]\n", pos_consulta, memoria[pos_consulta]);
                break;
            
            default:
                break;
        }

    } while (opcao != 'E');
        
    return 0;
}