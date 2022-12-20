#include <stdio.h>
#include <string.h>

#define SIZE 5

typedef struct 
{
    int dia;
    int mes;
    int ano;

} Data;

typedef struct
{
    Data data;
    char compromisso[60];

} Agenda_Compromisso;

void main()
{
    Agenda_Compromisso agenda_compromissos[SIZE];

    // leitura dos dados
    for (int i = 0; i < SIZE; i++) {
        printf("Digite o [%do] compromisso: ", i + 1);
        fgets(agenda_compromissos[i].compromisso, 60, stdin);

        printf("Digite a data desse compromisso (dd/mm/aaa) ");
        scanf("%d %d %d", &agenda_compromissos[i].data.dia, &agenda_compromissos[i].data.mes, &agenda_compromissos[i].data.ano);
        fflush(stdin);
        printf("\n");

    }

    int M, A;

    printf("\tBUSCA COMPROMISSOS\n\n");
    while (1) // enquanto for verdade, execute
    { 
        printf("Digite o mes da busca: ['0' PARA ENCERRAR] ");
        scanf("%d", &M);
        if (M == 0) break;  // interrompe o programa caso M seja igual a 0

        printf("Digite o ano da busca: ");
        scanf("%d", &A);
        printf("\n");

        // impressão dos dados da busca
        for (int i = 0; i < SIZE; i++) { 
            if ( (M == agenda_compromissos[i].data.mes) && (A == agenda_compromissos[i].data.ano) ) {
                printf("[%do] COMPROMISSO ESTE MES: %s", i + 1, agenda_compromissos[i].compromisso);
                printf("DATA: (%d/%d/%d)\n", agenda_compromissos[i].data.dia, agenda_compromissos[i].data.mes, agenda_compromissos[i].data.ano);

            }

        printf("\n");
        }
    }

    printf("PROGRAMA ENCERRADO\n\n");

}