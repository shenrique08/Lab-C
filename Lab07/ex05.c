/*#include <stdio.h>
#include <string.h>

void main()
{
    char palavra[30];

    printf("Digite uma palavra com letras maiusculas: ");
    fgets(palavra, 30, stdin);

    printf("A palavra digitada em letras maiusculas eh %s", strlwr(palavra));

}*/

#include <stdio.h>
#include <string.h>

void main()
{
    char palavra[30];

    printf("Digite uma palavra com letras maiusculas: ");
    gets(palavra);

    char len = strlen(palavra);

    for (int i = 0; i < len; i++) {
        palavra[i] += 32; // Na tablea ASCII, as letras maíuculas correspondentes estão a 32 números de distância.
                          // Isto é, se 'a' está em 65, então 'A' está em 97

    }

    printf("Em minusculo: %s", palavra);

}   