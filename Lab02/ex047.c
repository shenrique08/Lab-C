#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, uni, dez, cent, milh;
    printf("Digite um numero inteiro de 4 digitos (entre 1000 e 9999) ");
    scanf("%d", &num);
    uni = num % 10;
    dez = (num / 10) % 10;
    cent = (num / 100) % 10;
    milh = num / 1000 ;

    printf("O numero %d invertido eh %d%d%d%d", num, uni, dez, cent, milh);
    return 0;

}
