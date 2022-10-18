#include <stdio.h>
int main()
{
    float m_cubicos, litros;
    printf("Digite um valor em metros cubicos: ");
    scanf("%f", &m_cubicos);
    litros = 1000 * m_cubicos;
    printf("O valor digitado em litros e %.1f", litros);
    return 0;

}
