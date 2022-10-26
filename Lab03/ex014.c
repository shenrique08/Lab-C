#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota_final, lab, aval_semestral, exame_final;
    printf("Digite a nota de laboratorio: [0 a 10] ");
    scanf("%f", &lab);
    printf("Digite a nota da prova semestral: [0 a 10] ");
    scanf("%f", &aval_semestral);
    printf("Digite a nota do exame final: [0 a 10] ");
    scanf("%f", &exame_final);
    nota_final = ((lab * 2) + (aval_semestral * 3) + (exame_final * 5)) / 10;

    if (nota_final <= 2.9) {
        printf("O senhor esta REPROVADO. Volte semestre que vem! ");

    } if (nota_final > 2.9 && nota_final < 5.0) {
        printf("O senhor esta de RECUPERACAO. ESTUDE MAIS!");

    } else {
        printf("Parabens! O senhor esta APROVADO.");

    }

    return 0;

}