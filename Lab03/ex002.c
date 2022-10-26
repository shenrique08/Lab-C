#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Type an integer: ");
    scanf("%d", &n1);
    if (n1 > 0){
        printf("The square root of %d is %d", n1, (n1*n1));

    }else{
        printf("%d is invalid ", n1);
        
    }
    
    return 0;

}