#include <stdio.h>
#include <string.h>

void main()
{
    char frase[40];

    printf("Digite uma frase: ");
    gets(frase);

    char len = strlen(frase);

    for (int i = 0; i < len; i++) {
        if (frase[i] == ' ')
            for (int j = i; j < strlen(frase); j++) {
                frase[j] = frase[j + 1];
            }

    }

    printf("Essa frase com todas as letras juntas eh \n%s", frase);

}