#include <stdio.h>
#include <string.h>

void main()
{
    char palavra[20];

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    printf("A palavra escrita de tras pra frente eh: ");

    char len = strlen(palavra);

    for (int i = len; i >= 0; i--) {
        printf("%c", palavra[i]);

    }
}