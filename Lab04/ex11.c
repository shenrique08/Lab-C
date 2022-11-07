#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        printf("%d ", i);

    }

    return 0;
    
}