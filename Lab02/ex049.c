#include <stdio.h>
#include <stdlib.h>

int main()

{
    float h, min, s, h_s, min_s, novo_segundo, duracao, novo_horario_h, novo_horario_s, novo_horario_min;
    printf("Digite a hora do inicio do experimento: ");
    scanf("%f", &h);
    printf("Digite o minuto do inicio do experimento: ");
    scanf("%f", &min);
    printf("Digite o segundo do inicio do experimento: ");
    scanf("%f", &s);
    printf("Qual foi a duracao do experimento em segundos? ");
    scanf("%f", &duracao);
    h_s = h / 3600;
    min_s = min / 60;
    novo_horario_s = h_s + min_s + s;
    novo_horario_h = novo_horario_s * 3600;
    novo_horario_min = novo_horario_s * 60;
    printf("O novo horario eh %.0fhrs, %.0fmin, %.0fs", novo_horario_h, novo_horario_min, novo_horario_s);

}
