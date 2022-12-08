#include <stdio.h>

void main()
{
    char str[30];

    printf("Digite uma frase: ");
    fgets(str, 30, stdin);

    printf("A frase digitada foi\n%s", str);

}