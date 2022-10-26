#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    int n1, n2;
    printf("Type the operation you would like to make: [+, -, *, /] ");
    scanf("%c", &operation);
    printf("Type the first integer: ");
    scanf("%d", &n1);
    printf("Type the second integer: ");
    scanf("%d", &n2);
    switch (operation)
    {
        case '+':
            printf("%d + %d is %d", n1, n2, (n1 + n2));
            break;
        case '-':
            printf("%d - %d is %d", n1, n2, (n1 - n2));
            break;
        case '*':
            printf("%d X %d is %d", n1, n2, (n1 * n2));
            break;
        case '/':
            printf("%d / %d is %d", n1, n2, (n1 / n2));
            break;
        default:
            printf("ERROR... Type a valid option!");
            break;
    }

    return 0;

}