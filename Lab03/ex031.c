#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height, weight;
    printf("Type your height: (cm) ");
    scanf("%f", &height);
    printf("Now type your weight: (kg) ");
    scanf("%f", &weight);
    if (height < 1.2 && weight < 60) {
        printf("A");
    } else if (height < 1.2 && weight >= 60 && weight <= 90) {
        printf("D");
    } else if (height < 1.2 && weight > 90) {
        printf("G");
    } else if (height >= 1.2 && height <= 1.7 && weight < 60) {
        printf("B");
    } else if (height >= 1.2 && height <= 1.7 && weight >= 60 &&  weight <= 90) {
        printf("E");
    } else if (height >= 1.2 && height <= 1.7 && weight > 90) {
        printf("H");
    } else if (height > 1.7 && weight < 60) {
        printf("C");
    } else if (height > 1.7 && weight >= 60 && weight <= 90) {
        printf("F");
    } else if (height > 1.7 && weight > 90) {
        printf("I");
    }

    return 0;

}