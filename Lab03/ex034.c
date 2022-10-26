#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota, n_faltas;

    printf("Qual foi a nota do aluno? ");
    scanf("%f", &nota);
    printf("Qual foi o numero de faltas do aluno? ");
    scanf("%f", &n_faltas);

    if (nota >= 9 && nota <= 10) {

        if (n_faltas <= 20) {
            printf("CONCEITO \"A\"");
        } else {
            printf("CONCEITO \"B\"");
        }
    
    } else if (nota >= 7.5 && nota <= 8.9) {

        if (n_faltas <= 20) {
            printf("CONCEITO \"B\"");
        } else {
            printf("CONCEITO \"C\"");
        }

    } else if (nota >= 5 && nota <= 7.4) {

        if (n_faltas <= 20) {
            printf("CONCEITO \"C\"");
        } else {
            printf("CONCEITO \"D\"");
        }

    } else if (nota >= 4 && nota <= 4.9) {

         if (n_faltas <= 20) {
            printf("CONCEITO \"D\"");
        } else {
            printf("CONCEITO \"E\"");
        }

    } else if (nota >= 0 && nota <= 3.9) {

         if (n_faltas <= 20) {
            printf("CONCEITO \"E\"");
        } else {
            printf("CONCEITO \"E\"");
        }

    }

    return 0;

}