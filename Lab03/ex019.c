#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    if (n1 % 3 == 0) {
        printf("O numero %d eh divisivel por 3. ", n1);

    } else if (n1 % 5 == 0) {
        printf("O numero %d eh divisivel por 5.", n1);

    }   
    return 0;

}