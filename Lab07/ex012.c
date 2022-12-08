#include <stdio.h>
#include <string.h>

void main()
{
    char frase[50];

    printf("Digite uma frase: ");
    fgets(frase, 50, stdin);

    printf("A frase normal eh: %s", frase);

    int len = strlen(frase);

    for (int i = 0; i < len; i++) {
        if (frase[i] != ' ' && frase[i] != '\n')
            frase[i] -= 29;

    }

    printf("Essa frase em codigo de cesar eh %s", frase);

}