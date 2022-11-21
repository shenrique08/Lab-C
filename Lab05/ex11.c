#include <stdio.h>

void encontre_media(float nota1, float nota2, float nota3)
{
    char escolha;

    do {
        printf("Qual media deseja calcular? [A] - Media Aritimetica / [P] - Media ponderada ");
        scanf("%c", &escolha);

    } while ( (escolha != 'A' && escolha != 'a') && (escolha != 'P' && escolha != 'p') );
    
    
    if (escolha == 'A' || escolha == 'a') {

        float media_aritimetica = (nota1 + nota2 + nota3) / 3;
        printf("A media aritimetica eh %.3f", media_aritimetica);

    } else if (escolha == 'P' || escolha == 'p') {

        float media_ponderada = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
        printf("A media ponderada eh %.3f", media_ponderada);

    }
}

void main()
{
    float n1, n2, n3, media;

    printf("Digite 3 notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    encontre_media(n1, n2, n3);

}