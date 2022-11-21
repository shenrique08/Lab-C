#include <stdio.h>

void soma_algarismos(int num)
{
    int soma = 0;

   printf("Digite um numero maior que zero: ");
   scanf("%d", &num);

   if (num > 0) {

       while (num > 0) {
       soma = soma + num % 10;
       num = num / 10;

       }

       printf("A soma dos algarismos eh: %d", soma);

    } else {
       printf("O numero eh invalido");

   }
}

void main()
{
    int numero;

    soma_algarismos(numero);
    
}