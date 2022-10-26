#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Type two integers: \n");
    scanf("%d%d", &n1, &n2);
    if (n1 > n2) {
        printf("%d is greater than %d", n1, n2);
    } if (n2 > n1) {
        printf("%d is greater than %d", n2, n1);
    } else {
        printf("%d is equal to %d", n1, n2);
    }
    return 0;

}