#include<stdlib.h>

void main()
{
	int numeros[10];

	for(int i = 0; i < 10; i++) {
		
        printf("Digite um numero da posicao [%d] ", i);
		scanf("%d", &numeros[i]);

		for(int j = 0; j < i; j++) {
            if(numeros[i] == numeros[j]) {
                printf("\nNumero repetido, digite outro.\n");

                i--;
                continue;
			
		    }
        }
	}

    printf("Os numeros digitados foram\n");

	for(int i = 0; i < 10; i++) {
		printf("[%d]-> ", numeros[i]);

	}
}