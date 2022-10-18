#include <stdio.h>
int main()
{
    float cm, inches;
    printf("Type a number in centimeters: ");
    scanf("%f", &cm);
    inches = cm / 2.54;
    printf("That number in inches is %.2f", inches);
    return 0;

}
