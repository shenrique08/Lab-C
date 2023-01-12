#include <stdio.h>

void main()
{
    int A, *B, **C, ***D;

    printf("Digite um valor inteiro: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    printf("%d = A\t %d = B\t %d = C\t %d = D\n", A, (2 * (*B)), (3 * (**C)), (4 * (***D)));

}