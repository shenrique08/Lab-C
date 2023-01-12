#include <stdio.h>

void main()
{
    int a, b;
    int *Pa, *Pb;

    Pa = &a;
    Pb = &b;

    printf("Endereco em hexadecimal da variavel A: %p\n", Pa);
    printf("Endereco em hexadecimal da variavel B: %p\n", Pb);

    if (Pa > Pb)
        printf("%p <- Maior endereco", Pa);
    else 
        printf("%p <- Maior endereco", Pb);

}