#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int num_alunos, i;

    printf("Informe o numero de alunos: ");
    scanf("%d", &num_alunos);

    char **nomes = (char**)malloc(num_alunos * sizeof(char*));
    float *notas = (float*)malloc(num_alunos * sizeof(float));

    for (i = 0; i < num_alunos; i++) {
        nomes[i] = (char*)malloc(40 * sizeof(char));
        printf("Informe o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Informe a nota final do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    FILE *arquivo = fopen("alunos.txt", "w");

    for (i = 0; i < num_alunos; i++) 
        fprintf(arquivo, "%-40s %.2f\n", nomes[i], notas[i]);
    
    fclose(arquivo);

    for (i = 0; i < num_alunos; i++) 
        free(nomes[i]);
    
    free(nomes);
    free(notas);

    return 0;
}