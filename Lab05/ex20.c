#include <stdio.h>

int encontre_numeros_primos(int N)
{

    if (N <= 1) {
        return 0;      
    }             

    for (int i = 2; i * i <= N; i++){      
        if (N % i == 0) {
            return 0;     

        } 
    }

    return 1;                       
}

int ContaPrimo (int N)
{
    int contador = 0;

    for (int i = 2; i < N; i++){     
        if (encontre_numeros_primos(i) == 1) {
            printf("%d ", i);   
            contador++;        
        }   
    }
    printf("<= NUMEROS PRIMOS");
    printf("\n");

    return contador;
}

void main()
{
    int N, quantidade;
    printf("Digite um numero maior que 0: ");
    scanf("%d", &N);

    printf("A quantidade de numeros primos abaixo de %d eh %d\n", N, ContaPrimo(N));
 
}