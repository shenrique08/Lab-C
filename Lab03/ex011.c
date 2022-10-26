#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, soma=0;
   printf("Digite um numero: ");
   scanf("%d", &num);

   if (num>0) {
       while (num>0) {
       soma = soma + num % 10;
       num = num / 10;
       }
       printf("A soma dos algarismos eh:%d", soma);

   } else {
       printf("O numero eh invalido");
   }

   return 0;

}