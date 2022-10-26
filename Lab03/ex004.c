#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    printf("Type a positive number: ");
    scanf("%f", &x);
    if (x > 0){
        printf("The square of %.2f is %.2f, and the square root of %.2f is %.2f", x, (x * x), x, sqrt(x));

    }else{
        printf("Invalid number: ");
    }
    return 0;

}