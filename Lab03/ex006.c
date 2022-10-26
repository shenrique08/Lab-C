#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i1, i2;
    printf("Type two integers: \n");
    scanf("%d%d", &i1, &i2);
    if (i1 > i2){
        int dif1;
        dif1 = i1 - i2;
        printf("%d is greater than %d, and the difference between them is %d", i1, i2, dif1);

    }if (i2 > i1){
        int dif2;
        dif2 = i2 - i1;
        printf("%d is greater than %d, and the difference between them is %d", i2, i1, dif2);
    }
    return 0;
    
}