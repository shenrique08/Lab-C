#include <stdio.h>

void main()
{
    int elementos[50];

    for (int i = 0; i < 50; i++) {
        printf("[%d] -> ", ((i +(5 * i)) % (i + 1)));

    }
}