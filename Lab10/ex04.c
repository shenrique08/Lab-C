#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *palavra;
    int qtd_letras;

    printf("Digite a quantidade de letras de uma palavra: ");
    scanf("%d", &qtd_letras);

    palavra = calloc(qtd_letras, sizeof(char));
    // checando se a memória foi alocada com sucesso
    if (palavra == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1);
    }

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    strupr(palavra);
    
    printf("\nPalavra sem vogais:\n");
    for (int i = 0; i < qtd_letras; i++) {
        if (palavra[i] != 'A' && palavra[i] != 'E' && palavra[i] != 'I' && palavra[i] != 'O' && palavra[i] != 'U')
            printf("%c", palavra[i]);
    }

    free(palavra);
    return 0;
}