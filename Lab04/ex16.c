#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    int operando;

    do {
        printf("\n    CALCULADORA DO CLAUDINEY\n");

        printf("Digite dois numeros inteiros: \n");
        scanf("%f %f", &n1, &n2);

        do {
            printf("Escolha a Operacao Matematica que deseja: \n");
            printf("Opcao [1] - Adicao \n");
            printf("Opcao [2] - Subtracao \n");
            printf("Opcao [3] - Multiplicacao \n");
            printf("Opcao [4] - Divisao \n");
            printf("Opcao [5] - ENCERRAR CALCULADORA\n");
            scanf("%d", &operando);

        } while (operando < 1 || operando > 5);
        
        if (operando >= 1 && operando <= 5) {

            switch (operando) {
                case 1:
                    printf("%.2f + %.2f = %.2f", n1, n2, (n1 + n2));
                    break;
                case 2:
                    printf("%.2f - %.2f = %.2f", n1, n2, (n1 - n2));
                    break;
                case 3:
                    printf("%.2f * %.2f = %.2f", n1, n2, (n1 * n2));
                    break;
                case 4:
                    printf("%.2f / %.2f = %.2f", n1, n2, (n1 / n2));
                    break;
                case 5:
                    break;

                }

        } 

    } while (operando != 5);

    printf("\nCALCULADORA ENCERRADA");

    return 0;

}