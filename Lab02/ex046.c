#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num, unidade, dezena, centena;
    printf("Digite um numero com 3 digitos: ");
    scanf("%d", &num);
    unidade = num % 10;
    dezena = (num / 10) % 10;
    centena = num / 100;
    printf("%d%d%d", unidade, dezena, centena);
    return 0;

}
