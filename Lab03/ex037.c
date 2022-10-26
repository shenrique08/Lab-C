#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia_atual, mes_atual, ano_atual, momento_chegada, momento_partida, tarifa;
    
    printf("Digite o dia numerico de hoje : ");
    scanf("%d", &dia_atual);
    printf("Digite o mes numerico atual: ");
    scanf("%d", &mes_atual);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    printf("Hora do momento de chegada: (0 - 24) ");
    scanf("%d", &momento_chegada);
    printf("Hora do momento de partida: (0 - 24) ");
    scanf("%d", &momento_partida);

    if ((momento_partida - momento_chegada) >= 1 && (momento_partida - momento_chegada) <= 2 ) {
        tarifa = 1;
        printf("[%d]/[%d]/[%d] \n", dia_atual, mes_atual, ano_atual);
        printf("O valor a ser pago eh %dR$", (momento_partida - momento_chegada) * tarifa);

    } else if ((momento_partida - momento_chegada) >= 3 && (momento_partida - momento_chegada) <= 4) {
        tarifa = 1.4;
        printf("[%d]/[%d]/[%d] \n", dia_atual, mes_atual, ano_atual);
        printf("O valor a ser pago eh %dR$", (momento_partida - momento_chegada) * tarifa);

    } else if ((momento_partida - momento_chegada) >= 5) {
        tarifa = 2;
        printf("[%d]/[%d]/[%d] \n", dia_atual, mes_atual, ano_atual);
        printf("O valor a ser pago eh %dR$", (momento_partida - momento_chegada) * tarifa);

    }

    return 0;

}