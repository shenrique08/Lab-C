#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char palavra[30], palavra_de_tras_pra_frente[30];
    int i;

    printf("VERIFICADOR DE PALINDROMO\n");
    printf("Digite uma palavra: ");
    gets(palavra);

    fflush(stdin);

    int len = strlen(palavra);

    printf("A palavra digitada de tras para frente foi [");

    for (i = len; i >= 0; i--) {
        printf("%c", palavra[i]);
        palavra[i] = tolower(palavra[i]);

    }
    printf("]");

    strcpy(palavra_de_tras_pra_frente, palavra); // copia da palavra para verificação
    strrev(palavra_de_tras_pra_frente); // função que inverte a palavra copiada

    if (strcmp(palavra, palavra_de_tras_pra_frente) == 0) // comparação da string original com a invertida
        printf("\nLogo, [%s] eh um palindromo", palavra);
    else 
        printf("\nLogo,[%s] nao eh um palindromo", palavra);
        
}