#include <stdio.h>
int findnumber(int num)
{
    if (num == 0) {
        return 0;

    } else {
        if (num > 0) {
            return 1;

        } else {
            return -1;

        }
    }
}

int main()
{
    int number, new_number;

    printf("Enter a number: ");
    scanf("%d", &number);

    new_number = findnumber(number);

    printf("%d", new_number);

    return 0;

}