#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, j, a, b, primo;
    int soma_primos = 0;  
    int div = 0;

   printf("Digite o primeiro valor inteiro e positivo: ");
   scanf("%d", &a);
   printf("Digite o segundo valor inteiro e positivo: ");
   scanf("%d", &b);

   if(a > 0 && a < b ) {

     for (i = a; i < b; i++) {

       primo = 1;

       for (j = 2; j <= i; j++) {

           if (((i % j) == 0) && (j != i)) {

               primo = 0;
               break;
           }
       } if (primo == 1) {
                printf("%d ", i);
                soma_primos += i;

       }

     }      

   } else {

     printf("Digite numeros validos!");

   }  
    printf("\nA soma dos primos eh %d", soma_primos);

    return 0;

}