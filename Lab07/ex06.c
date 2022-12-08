#include <stdio.h>
#include <string.h>

void main()
{
    char palavra[30];

    printf("Digite uma palavra em letras minusculas: ");
    gets(palavra);

    char len = strlen(palavra);

    for (int i = 0; i < len; i++) {
        palavra[i] -= 32;

    }

    printf("Essa palavra em letras maiusculas eh [%s]", palavra);

}