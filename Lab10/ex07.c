#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeros_gerados[6], numeros_bilhete[6], i;

    srand(time(NULL));

    // gera os números da loteria
    for (i = 0; i < 6; i++) 
        numeros_gerados[i] = rand() % 100; 
    

    // Leitura dos numeros do bilhete do jogador
    printf("\n\n");
    for (i = 0; i < 6; i++) {
        printf("Digite o [%do] numero do seu bilhete: ", i + 1);
        scanf("%d", &numeros_bilhete[i]);
    }


    // contar quantos números o jogador acertou
    int qtd_acertos = 0;
    int *numeros_corretos;
    printf("\n\n");
    for (i = 0; i < 6; i++) {
        if (numeros_gerados[i] == numeros_bilhete[i]) 
            qtd_acertos += 1;
    }   


    // alocando e guardando os números corretos no vetor de acordo com a quantidade de acertos
    numeros_corretos = calloc(qtd_acertos, sizeof(int)); 
    int j = 0;
    for (i = 0; i < 6; i++) {
        if (numeros_gerados[i] == numeros_bilhete[i]) {
            numeros_corretos[j] = numeros_bilhete[i];
            j++;
        }
    }


    // imprime os números gerados
    printf("Numeros sorteados pela loteria: \n");
    for (i = 0; i < 6; i++) 
        printf("[%d] ", numeros_gerados[i]); 
    

    // imprime os números que o usuário acertou
    printf("\n\nNumeros corretos: \n");
    for (i = 0; i < qtd_acertos; i++)
        printf("[%d] ", numeros_corretos[i]);
    printf("\n\n");

    free(numeros_corretos);

    return 0;
}