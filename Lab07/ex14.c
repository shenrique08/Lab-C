#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50], str2[50];
    int N;

    printf("Digite a primeira string: ");
    gets(str1);

    printf("Digite a segunda string: ");
    gets(str2);

    printf("Digite um valor inteiro qualquer: ");
    scanf("%i", &N);

    int len = strlen(str1);

    for (int i = 0; i < N; i++) {
        str1[len + 1] = str2[i];

    }

    str1[len + N] = '\0';

    printf("%s", str1);

}