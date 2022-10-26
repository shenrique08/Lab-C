#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Digite dois numeros inteiros: \n");
    scanf("%d%d", &n1, &n2);
    if (n1 > n2){
        printf("%d eh maior que %d", n1, n2);
        
    }if (n2 > n1){
        printf("%d eh maior que %d", n2, n1);

    }

    return 0;

}