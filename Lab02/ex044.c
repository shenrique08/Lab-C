#include <stdio.h>
#include <stdlib.h>
int main()
{
    int h_degrau, h_usuario, degraus;
    printf("Qual e a altura do degrau da escada (cm)? ");
    scanf("%d", &h_degrau);
    printf("Qual e a altura que deseja alcancar? (cm) ");
    scanf("%d", &h_usuario);
    degraus = h_usuario / h_degrau;
    printf("Voce devera subir %d degraus", degraus);
    return 0;

}
