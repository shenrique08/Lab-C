#include <stdio.h>

typedef struct 
{
    int dia;
    int mes;
    int ano;

} dma1;

typedef struct 
{
    dma1 Dma1;

    int dia2;
    int mes2;
    int ano2;

} dma2;


float dias_no_ano(float day, float month) // função para calcular quantos dias correram daquela data até o final do primeiro ano inserido
{
    return ((12 - month) * 30.416) + (31 - day); // considera que um mês tem, em média, 30 dias e 10 horas por ano
}


float dias_ant_ano(float day, float month) // função para calcular quantos dias correram do início do ano até aquela data do segundo ano inserido
{
    return ((month - 1) * 30.416) + day; // considera que um mês tem, em média, 30 dias e 10 horas por ano
}


void main()
{
    dma2 Dma2;
    float tot_dias1 = 0, tot_dias2 = 0;

    printf("Digite a data anterior (dd/mm/aaa) ");
    scanf("%d %d %d", &Dma2.Dma1.dia, &Dma2.Dma1.mes, &Dma2.Dma1.ano);
    fflush(stdin);

    printf("Digite a data posterior (dd/mm/aaaa) ");
    scanf("%d %d %d", &Dma2.dia2, &Dma2.mes2, &Dma2.ano2);

    tot_dias1 = dias_no_ano(Dma2.Dma1.dia, Dma2.Dma1.mes); // quantidade de dias da primeira data lida
    tot_dias2 = dias_ant_ano(Dma2.dia2, Dma2.mes2); // quantidade de dias da segunda data lida

    
    printf("\nO total de dias corridos entre (%d/%d/%d) e (%d/%d/%d) eh aproximadamente '%.2f'\n\n", 
    Dma2.Dma1.dia, Dma2.Dma1.mes,
    Dma2.Dma1.ano, Dma2.dia2, Dma2.mes2, Dma2.ano2, 
    tot_dias1 + tot_dias2);

}