#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("-------------------------------\n");
    printf("      BANCO TUPINIQUINHO\n");
    printf("-------------------------------\n");

    int valor, total;
    int cedula = 100;
    int total_cedula = 0;


    printf("Digite quanto deseja sacar: R$");
    scanf("%d", &valor);
    total = valor;

    do { 
        if (total >= cedula) {
            total -= cedula;
            total_cedula += 1;

        } else { 
            if (total_cedula > 0) {
                printf("Total de %d celulas de R$ %d\n", total_cedula, cedula);
                     
            } if (cedula == 100) {
                cedula = 50;

            } else if (cedula == 50) {
                cedula = 20;

            } else if (cedula == 20) {
                cedula = 10;

            } else if (cedula == 10) {
                cedula = 1;
            total_cedula = 0;
                
            } if (total == 0) {
                break;

            }
        }

    } while (total > 0);

    printf("Saque finalizado \n\n");

    return 0;

}