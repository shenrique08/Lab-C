#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, prestacao;
    printf("Digite o salario do trabalhador: R$");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao do emprestimo: R$");
    scanf("%f", &prestacao);
    if (prestacao > salario * 0.2) {
        printf("Emprestimo nao concedido ");
    } else {
        printf("Emprestimo concedido");
    }
    return 0;
    
}