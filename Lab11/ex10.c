#include <stdio.h>
#include <string.h>

int main()
{
    char cidade[40], cidade_mais_populosa[40], nome_entrada[100], nome_saida[100];
    int habitantes, habitantes_mais_populosos = 0;

    FILE *entrada, *saida;
    
    printf("Informe o nome do arquivo de entrada: ");
    scanf("%s", nome_entrada);
    printf("Informe o nome do arquivo de saida: ");
    scanf("%s", nome_saida);

    entrada = fopen(nome_entrada, "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada\n");
        exit(1);
    }

    saida = fopen(nome_saida, "w");
    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saida\n");
        exit(1);
    }

    while (fscanf(entrada, "%s %d", cidade, &habitantes) != EOF) {
        if (habitantes > habitantes_mais_populosos) {
            habitantes_mais_populosos = habitantes;
            strcpy(cidade_mais_populosa, cidade);
        }
    }

    fprintf(saida, "Cidade mais populosa: %s\n", cidade_mais_populosa);
    fprintf(saida, "Numero de habitantes: %d\n", habitantes_mais_populosos);

    fclose(entrada);
    fclose(saida);

    return 0;
}