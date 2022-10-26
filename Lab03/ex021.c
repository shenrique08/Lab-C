#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option, num1, num2;

    printf("Type an option: [ [1] - SUM, [2] - DIFERENCE, [3] - MULTIPLICATION , [4] - DIVISION ] ");
    scanf("%d", &option);
    printf("Now type two integers: \n");
    scanf("%d%d", &num1, &num2);

    switch (option)
    {

        case 1:
            printf("%d + %d = %d", num1, num2, (num1 + num2));
            break;
        case 2:
            printf("|%d| - |%d| = %d", num1, num2, ((num1 > num2)?(num1 - num2):(num2 - num1)));
            break;
        case 3:
            printf("%d * %d = %d", num1, num2, (num1 * num2));
            break;
        case 4:
            printf("%d / %d = %d", num1, num2, (num1 / num2));
            break;
        default:
            printf("ERROR... Type a valid option");
            break;

    }

    return 0;

}