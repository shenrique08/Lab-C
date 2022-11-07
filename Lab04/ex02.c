#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j = 1;
    int z = 1;

    for (i = 1; i <= 100; i++) {
        printf("%d ", i);

    printf("\n");
    }

    while (j <= 100) {
        printf("%d ", j);
        j += 1;

    printf("\n");
    }

    do {
        printf("%d ", z);
        z += 1;
    } while (z <= 100);



    return 0;

}