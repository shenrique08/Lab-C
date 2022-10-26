#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Type an integer: ");
    scanf("%d", &n1);
    if (n1 % 2 == 0){
        printf("%d is even ", n1);

    }else{
        printf("%d is odd ",n1);
    }
    return 0;
    
}