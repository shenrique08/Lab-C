#include <stdio.h>
#include <string.h>

int main() 
{
    int ano_atual;
    char nome[40], entrada[40], saida[40];
    int ano_nascimento;
    int idade;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", entrada);
    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", saida);

    // Abre o arquivo de entrada
    FILE* arq_entrada = fopen(entrada, "r");

    // Abre o arquivo de saída
    FILE* arq_saida = fopen(saida, "w");

    // Lê cada linha do arquivo de entrada
    while (fscanf(arq_entrada, "%s %d", nome, &ano_nascimento) != EOF) {
        // Calcula a idade da pessoa
        idade = ano_atual - ano_nascimento;

        // Escreve o nome da pessoa no arquivo de saída
        fprintf(arq_saida, "%s ", nome);

        // Escreve a idade da pessoa no arquivo de saída
        if (idade < 18) {
            fprintf(arq_saida, "menor de idade\n");
        }
        else if (idade == 18) {
            fprintf(arq_saida, "entrando na maior idade\n");
        }
        else {
            fprintf(arq_saida, "maior de idade\n");
        }
    }

    // Fecha os arquivos
    fclose(arq_entrada);
    fclose(arq_saida);

    return 0;
}