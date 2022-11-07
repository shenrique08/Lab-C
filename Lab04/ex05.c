#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma, valor;
    i = 1;
    soma = 0;

    do {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        i += 1;
        soma += valor;

    } while (i <= 10);        
       

    printf("A soma desses valores eh %d", soma);

    return 0;

}