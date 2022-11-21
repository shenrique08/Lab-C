#include <stdio.h>

void calculadora(int x, int y)
{
    char operando;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &x, &y);

    

    do {

        printf("Digite qual operacao deseja realizar: [+], [-], [*], [/] \n");
        fflush(stdin);
        scanf("%c", &operando);

    } while (operando != '+' && operando != '-' && operando != '*' && operando != '/');


    switch(operando) {
        case '+':
            printf("[%d] + [%d] = [%d]", x, y, (x + y));
            break;
        case '-':
            printf("[%d] - [%d] = [%d]", x, y, (x - y));
            break;
        case '*':
            printf("[%d] X [%d] = [%d]", x, y, (x * y));
            break;
        case '/':
            printf("[%d] / [%d] = [%d]", x, y, (x / y));
            break;
        default:
            printf("Operacao invalida: ");
            break;

    }
}
void main()
{
    int n1, n2;

    calculadora(n1, n2);

}