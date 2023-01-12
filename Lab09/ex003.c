#include <stdio.h>

void main()
{
    int a, b;

    printf("Digite dois valores inteiros: \n");
    scanf("%d %d", &a, &b);

    printf("Endereco em hexadecimal da primeira variavel: \t%p\n", &a);
    printf("Endereco em decimal da primeira variavel: \t%d\n", &a);
    printf("Endereco em hexadecimal da segunda variavel: \t%p\n", &b);
    printf("Endereco em decimal da segunda variavel: \t%d\n\n", &b);

    if (&a > &b)
        printf("Endereco maior: %p\t %d", &a, &a);
    else 
        printf("Endereco maior: %p\t %d", &b, &b);

}
