#include <stdio.h>
#include <string.h>

int main() 
{
    char inputFileName[100], outputFileName[100];
    char line[30];
    int i;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", inputFileName);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", outputFileName);

    FILE *inputFile = fopen(inputFileName, "r");

    FILE *outputFile = fopen(outputFileName, "w");

    while (fgets(line, 30, inputFile) != NULL) {
        for (i = strlen(line) - 1; i >= 0; i--) {
            fprintf(outputFile, "%c", line[i]);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}