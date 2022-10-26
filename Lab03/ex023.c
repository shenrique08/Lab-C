#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Type the year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("That year is a leap year ");

    } else
    {
        printf("That year is not a leap year ");

    }
    
    return 0;

}