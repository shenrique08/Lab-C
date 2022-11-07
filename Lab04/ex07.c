#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, average, sum;
    sum = 0;

    for (i = 1; i <= 10; i++) {
        printf("Enter a positive integer: ");
        scanf("%d", &num);

        if (num > 0) {
            sum += num;

        }
    }
    average = sum / 10;

    printf("The arithmetic mean of all that positive numbers is %d", average);

    return 0;

}