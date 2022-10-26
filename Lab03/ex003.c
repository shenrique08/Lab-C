#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1;
    printf("Type a real number: ");
    scanf("%f", &n1);
    if (n1 > 0){
        printf("The square root of %.2f is %.4f", n1, sqrt(n1));

    }else{
        printf("The square of %.2f is %.2f", n1, (n1 * n1));
    }
    return 0;

}