#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media_pond;
    printf("Digite as tres notas: \n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    media_pond = ((nota1 * 1) + (nota2 * 2) + (nota3 * 2)) / 5;
    if (media_pond > 60) {
        printf("APROVADO, uma vez que sua media foi %.2f", media_pond);
    } else {
        printf("REPROVADO, uma vez que sua media foi %.2f", media_pond);
    }

    return 0;

}