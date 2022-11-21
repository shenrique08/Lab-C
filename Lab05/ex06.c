#include <stdio.h>

void conversao_tempo(int horas, int minutos, int segundos)
{
    horas = horas * 3600; // horas para segundos
    minutos = minutos * 60; // minutos para segundos

    printf("%d segundos + %d segunods + %d segundos = %d", horas, minutos, segundos, (horas + minutos + segundos));

}

int main()
{
    int h, m, s;

    printf("Digite a hora: ");
    scanf("%d", &h);
    printf("Digite os minutos: ");
    scanf("%d", &m);
    printf("Digite os segundos: ");
    scanf("%d", &s);

    conversao_tempo(h, m, s);

    return 0;

}