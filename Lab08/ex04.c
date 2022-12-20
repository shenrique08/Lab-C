#include <stdio.h>
#include <string.h>

typedef struct 
{
    char nome[50];
    long int matricula;
    float nota1, nota2, nota3;

} Alunos;

void main()
{
    Alunos alunos[5];

    float maior_nota1 = 0;
    float media_notas = 0, maior_media = 0, menor_media = 1000;
    char nome_maior_nota1[60], nome_maior_media[60], nome_menor_media[60];

    for (int i = 0; i < 2; i++) {
        printf("Digite o nome do [%do] aluno : ", i + 1);
        fgets(alunos[i].nome, 50, stdin);

        printf("Digite a matricula de %s", alunos[i].nome);
        scanf("%d", &alunos[i].matricula);

        printf("Digite a nota da prova 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a nota da prova 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Digite a nota da prova 3: ");
        scanf("%f", &alunos[i].nota3);
        fflush(stdin);

        // verificação da maior e da menor média e seus respectivos nomes
        media_notas = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;

        if (i == 0) {
            maior_media = media_notas;
            menor_media = media_notas;
            strcpy(nome_maior_media, alunos[i].nome);
            strcpy(nome_menor_media, alunos[i].nome);

        } else {
            if (media_notas > maior_media) {
                maior_media = media_notas;
                strcpy(nome_maior_media, alunos[i].nome);

            } else if (media_notas < menor_media) {
                menor_media = media_notas;
                strcpy(nome_menor_media, alunos[i].nome);
            }
        }
        // verificação da maior nota 1 e do nome de quem foi com essa nota
        if (i == 0) {
            maior_nota1 = alunos[i].nota1;
            strcpy(nome_maior_nota1, alunos[i].nome);

        } else {
            if (alunos[i].nota1 > maior_nota1) {
                strcpy(nome_maior_nota1, alunos[i].nome);
                maior_nota1 = alunos[i].nota1;
            }
        }

    printf("\n");

    }
    printf("Aluno com maior nota na primeira prova: NOTA: %.2f \tNOME-> %s", maior_nota1, nome_maior_nota1);
    printf("Aluno com maior media : MAIOR MEDIA: %.2f \tNOME-> %s", maior_media, nome_maior_media);
    printf("Aluno com maior media : MENOR MEDIA: %.2f \tNOME-> %s", menor_media, nome_menor_media);
    printf("\n");

    for (int i = 0; i < 2; i++) {
        media_notas = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;

        if (media_notas >= 6) {
            printf("%do aluno APROVADO. MEDIA: %.2f\n", i + 1, media_notas);
        }
        else {
            printf("%do aluno REPROVADO. MEDIA: %.2f\n", i + 1, media_notas);
        }
    }
    printf("\n");
}