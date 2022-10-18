#include <stdio.h>
int main()
{
    float litros, m_cubicos;
    printf("Digite um valor em litros: ");
    scanf("%f", &litros);
    m_cubicos = litros / 1000;
    printf("O valor digitado em metros cubicos eh %.1f", m_cubicos);
    return 0;

}
