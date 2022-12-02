#include <stdio.h>
#include <string.h>

void main()
{
  char frase[100], destino[100], caracter;
  int i, j = 0, len;

  printf("Digite uma frase: ");
  fgets(frase, 100, stdin);

  len = strlen(frase);

  for(i = 0; i < len; i++) {

    if((frase[i] == 'r'|| frase[i] == 'R') && (!((frase[i+1] == ' ') || (frase[i+1] == '\n')))){
      switch (frase[i])
      {
      case 'r':
        caracter = 'l'; 
        break;

      case 'R':
        caracter = 'L';
        break;

      }

      if(frase[i+1] == 'r')
          i++;
    }
    else {
        caracter = frase[i];
        
    }
    destino[j] = caracter;
    j++;
  }

  destino[j] = '\n';

  printf("%s\n", destino);

}