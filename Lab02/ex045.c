#include <stdio.h>
#include <stdlib.h>
int main()
{
   char caracter;
   printf("Digite uma letra em maiusculo: ");
   scanf("%c", &caracter);
   int primeiro_maiusculo = 'A';
   int primeiro_minusculo = 'a';
   int diferenca = primeiro_minusculo - primeiro_maiusculo;
   printf("%c", caracter + diferenca);
   return 0;

}
