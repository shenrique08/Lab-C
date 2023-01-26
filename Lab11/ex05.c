#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome_arquivo[50];
    char caractere_usuario;
    int contador = 0;

    // recebendo do usuário qual arquivo ele deseja abrir
    printf("\nDigite o nome do arquivo: ");
    scanf("%s", nome_arquivo);
    fflush(stdin);

    FILE *arquivo = fopen(nome_arquivo, "r"); // abrindo o arquivo do usuário. 'r' de read 

    if (arquivo == NULL) {
        printf("\nFalha ao abrir o arquivo. Tente novamente!\n");
        exit(1);
    }

    printf("Insira um caractere: ");
    scanf("%c", &caractere_usuario);

    char c;
    printf("\nConteudo do arquivo:\n\n");
    while ((c = fgetc(arquivo)) != EOF) { // enquanto a leitura dos caracteres chegar ao final
        printf("%c", c);
        if (c == caractere_usuario)
            contador += 1; // contagem de quantas vezes aquela letra apareceu no conteúdo do arquivo
    }

    fclose(arquivo); // fechando o arquivo de forma segura

    printf("\nQuantidade de vezes que o [%c] apareceu: [%d] vez/vezes\n\n", caractere_usuario, contador);

    return 0;
}