#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, average, sum;
    sum = 0;

    for (i = 1; i <= 10; i++) {
        printf("Enter an integer: ");
        scanf("%d", &num);
        sum += num;

    }
    average = sum / 10;
    printf("The arithmetic mean of all that numbers is %d ", average);

    return 0;

}