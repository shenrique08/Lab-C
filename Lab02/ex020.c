#include <stdio.h>
int main()
{
    float kg, lb;
    printf("Digite um valor de massa em quilogramas: ");
    scanf("%f", &kg);
    lb = kg / 0.45;
    printf("O valor digitado em libras eh %.3f", lb);
    return 0;

}
