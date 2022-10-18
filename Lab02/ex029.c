#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, media;
    printf("Digite as quatro notas: \n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("A media das 3 notas eh %.2f", media);
    return 0;

}
