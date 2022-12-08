#include <stdio.h>
#include <string.h>

void main()
{
    char str[8]= "0011001";
    int contador = 0;

    char len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == '1')
            contador += 1;

    }

    printf("A quantidade de 1's que aparece na string eh %i", contador);
    
}