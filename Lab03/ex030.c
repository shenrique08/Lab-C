#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, maior, med, menor;
    printf("Type three integers: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3) {
        maior = n1;
    } else if (n1 >= n2 && n1 >= n3 && n2 >= n3){
        printf("The ascending order is %d %d %d", n1, n2, n3);
    } else if (n1 >= n2 && n1 >= n3 && n3 >= n2) {
        printf("The ascending order is %d %d %d", n1, n3, n2);
    } else if (n2 >= n1 && n2 >= n3 && n1 >= n3) {
        printf("The ascending order is %d %d %d", n2, n1, n3);
    } else if (n2 >= n1 && n2 >= n3 && n3 >= n1) {
        printf("The ascending order is %d %d %d", n2, n3, n1);
    } else if (n3 >= n1 && n3 >= n2 && n1 >= n2) {
        printf("The ascending order is %d %d %d", n3, n1, n2);
    } else if (n3 >= n1 && n3 >= n2 && n2 >= n1) {
        printf("The ascending order is %d %d %d", n3, n2, n1);
    }

    return 0;

}