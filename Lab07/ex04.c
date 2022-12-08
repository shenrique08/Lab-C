#include <stdio.h>
#include <string.h>

void main()
{
    char palavra[20];
    char letra; // caracter de substituição
    int qtd_vogais = 0; // soma de todas as vogais da palavra

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    do {
        printf("Entre com uma letra para substituir por todas as vogais: ");
        fflush(stdin);
        scanf("%c", &letra);

    } while ((letra <= 'A' || letra >= 'Z') && (letra <= 'a' || letra >= 'z'));

    char len = strlen(palavra);

    for (int i = 0; i < len; i++) // percorrendo todo o vetor da string e analisando quais são vogais
    {
        if (palavra[i] == 'A' || palavra[i] == 'a') {
            qtd_vogais += 1;
            palavra[i] = letra;
     
        } else if (palavra[i] == 'E' || palavra[i] == 'e') {
            qtd_vogais += 1;
            palavra[i] = letra;

        } else if (palavra[i] == 'I' || palavra[i] == 'i') {
            qtd_vogais += 1;
            palavra[i] = letra;

        } else if (palavra[i] == 'O' || palavra[i] == 'o') {
            qtd_vogais += 1;
            palavra[i] = letra;

        } else if (palavra[i] == 'U' || palavra[i] == 'u') {
            qtd_vogais += 1;
            palavra[i] = letra;
        }
    }

    printf("Quantidade de vogais = [%d]\n", qtd_vogais);
    printf("Substituindo todas as vogais, temos %s", palavra);

}