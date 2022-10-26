#include <stdio.h>
#include <stdlib.h>

int main()
{
    float old_price, new_price;

    printf("Type the old price: R$ ");
    scanf("%f", &old_price);

    if (old_price < 50) {
        new_price = old_price * 1.05;
        printf("The new price is %.3f R$\n", new_price);

        if (new_price < 80) {
            printf("CHEAP");

        } else if (new_price >= 80 && new_price <= 120) {
            printf("NORMAL");

        } else if (new_price >= 120 && new_price <= 200) {
            printf("EXPENSIVE");

        } else if (new_price > 120) {
            printf("VERY EXPENSIVE");
        }

    } else if (old_price >= 50 && old_price <= 100) {
        new_price = old_price * 1.1;
        printf("The new price is %.3f R$\n", new_price);

        if (new_price < 80) {
            printf("CHEAP");

        } else if (new_price >= 80 && new_price <= 120) {
            printf("NORMAL");

        } else if (new_price >= 120 && new_price <= 200) {
            printf("EXPENSIVE");

        } else if (new_price > 120) {
            printf("VERY EXPENSIVE");
        }      

    } else {
        new_price = old_price * 1.15;
        printf("The new price is %.3f R$\n", new_price);

        if (new_price < 80) {
            printf("CHEAP");

        } else if (new_price >= 80 && new_price <= 120) {
            printf("NORMAL");

        } else if (new_price >= 120 && new_price <= 200) {
            printf("EXPENSIVE");

        } else if (new_price > 120) {
            printf("VERY EXPENSIVE");
        }

    }

    return 0;

}