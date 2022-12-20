#include <stdio.h>

#define SIZE 5

typedef struct 
{
    int codigo_voo_origem;
    int codigo_voo_destino;

} Voos;

typedef struct 
{
    Voos voos;

    int codigo_aero;
    int qtd_voos_saida;
    int qtd_voos_chegada;

} Aeroportos;

void main()
{
    Aeroportos aeroportos[SIZE];

    printf("\n\t[VOOS]\n\n");
    for (int i = 0; i < SIZE; i++) {
        do {
            printf("Informe o [%do] codigo de voo de origem: [0 -> 99] ", i + 1);
            scanf("%d", &aeroportos[i].voos.codigo_voo_origem);

            printf("Informe o [%do] codigo de voo de chegada: [0 -> 99] ", i + 1);
            scanf("%d", &aeroportos[i].voos.codigo_voo_destino);
            printf("\n");

        } while ((aeroportos[i].voos.codigo_voo_destino && aeroportos[i].voos.codigo_voo_origem) < 0 
                  || (aeroportos[i].voos.codigo_voo_destino && aeroportos[i].voos.codigo_voo_origem) > 99);

    }

    printf("\n\t[AEROPORTOS]\n\n");
    for (int j = 0; j < SIZE; j++) {
        do {
            printf("Informe o [%do] codigo do aeroporto: [0 -> 99] ", j + 1);
            scanf("%d", &aeroportos[j].codigo_aero);

            printf("Informe a quantidade de voos que saem deste aeroporto: ");
            scanf("%d", &aeroportos[j].qtd_voos_saida);

            printf("Informe a quantidade de voos que saem deste aeroporto: ");
            scanf("%d", &aeroportos[j].qtd_voos_chegada);
            printf("\n");

        } while ((aeroportos[j].voos.codigo_voo_destino && aeroportos[j].voos.codigo_voo_origem) < 0 
                  || (aeroportos[j].voos.codigo_voo_destino && aeroportos[j].voos.codigo_voo_origem) > 99);

    }
}