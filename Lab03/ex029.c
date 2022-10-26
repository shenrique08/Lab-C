#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int jogador, n1, n2, c, soma;

    srand(time(NULL));

    c = 0;
    soma = 0;
    while (c < 5) {

        n1 = rand() % 100;
        n2 = rand() % 100;
        printf("Quanto eh %d + %d ? ", n1, n2);
        scanf("%d", &jogador);
        c += 1;
        if (jogador == (n1 + n2))
        {
            printf("Parabens! Voce acertou! \n");
            soma += 1;
        } else if ((n1 + n2) != jogador) {
            printf("Essa voce errou! A resposta era %d \n", (n1 + n2));

        }
    }
    printf("Ao todo, voce acertou %d vezes", soma);

    return 0;
    
}