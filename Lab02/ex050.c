#include <stdio.h>
#include <stdlib.h>

int main()

{
    int ano_atual, ano_nasc, idade;
    printf("Quando vc nasceu? ");
    scanf("%d", &ano_nasc);
    printf("Qual ano estamos? ");
    scanf("%d", &ano_atual);
    idade = ano_atual - ano_nasc;
    printf("Sua idade eh %d", idade);
    return 0;

}
