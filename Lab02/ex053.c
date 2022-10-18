#include <stdio.h>
#include <stdlib.h>

int main()

{
    float c, l, p, custo;
    printf("Digite o comprimento do terreno (m) ");
    scanf("%f", &c);
    printf("Digite a largura do terreno (m) ");
    scanf("%f", &l);
    printf("Digite o preco do metro de tela: R$ ");
    scanf("%f", &p);
    custo = (c * l) * p;
    printf("O custo para cercar este terreno eh %.2fR$", custo);
    return 0;

}
