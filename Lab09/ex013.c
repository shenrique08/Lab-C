#include <stddef.h>

int verifica(const char *str1, const char *str2) 
{
    char *p1, *p2, *p3; // usado para percorrer os caracteres de cada string
    p1 = str1;
    p2 = str2;

    while(*p1) { // verifica se ainda há caracteres no primeiro array
        p3 = p1;
        while(*p3 && *p2 && *p3 == *p2) { // verifica se ainda há caracteres nas duas strings e se eles são iguais
            p3++;
            p2++;
        }
        if (!*p2) {
            return 1; // indica que a segunda string ocorre na primeira
        }
        p1++;
        p2 = str2;
    }

    return 0;
}