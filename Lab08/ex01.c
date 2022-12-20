#include <stdio.h>


typedef struct
{
    int hora, minutos, segundos;

} Horario;

typedef struct
{
    int dia, mes, ano;

} Data;

typedef struct
{
    Data data;
    Horario horario;
    char compromisso[500];

} Compromisso;