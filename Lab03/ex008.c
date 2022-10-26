#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    if (nota1 < 0 || nota2 < 0 || nota1 > 10 || nota2 > 10) {
        printf("Notas invalidas ");

    } else {
        printf("A media das notas eh %.2f", media);

    }
    return 0;

}