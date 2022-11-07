#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, greater, smaller;
    greater = 0;
    smaller = 0;

    for (i = 1; i <= 10; i++) {
        printf("Enter a integer: ");
        scanf("%d", &num);

        if (i == 1) {
            greater = num;
            smaller = num;

        } else {
            if (num > greater) {
                greater = num;
            } else {
                smaller = num;
            }
        }
    }

    printf("The greater number is %d\n", greater);
    printf("The smaller number is %d", smaller);

    return 0;

}