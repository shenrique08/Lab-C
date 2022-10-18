#include <stdio.h>
#include <math.h>
int main()
{
    float cateto_op, cateto_adj, hip;
    printf("Digite o valor do cateto oposto: ");
    scanf("%f", &cateto_op);
    printf("Digite o valor do cateto adjacente: ");
    scanf("%f", &cateto_adj);
    hip = sqrt((cateto_op * cateto_op) + (cateto_adj * cateto_adj));
    printf("O valor da hipotenusa desse triangulo eh %.2f", hip);
    return 0;

}
