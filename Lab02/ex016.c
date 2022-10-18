#include <stdio.h>
int main()
{
    float inch, cm;
    printf("Type number in inches: ");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("That value in centimeters is %.2f", cm);
    return 0;

}
