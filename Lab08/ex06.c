#include <stdio.h>
#include <string.h>

typedef struct 
{
    int dia, mes, ano;

} Data_Nasc;

typedef struct 
{
    Data_Nasc data_nasc;

    char Nome[40], cargo_trabalho[30];
    char sexo;
    int idade, CPF;
    int codigo_trabalho;
    float salario;

} Dados_Funcionarios;

void impressao_dados(Dados_Funcionarios d) // função para imprimir todos os dados
{
    printf("NOME: %s", d.Nome);
    printf("IDADE: %d\n", d.idade);
    printf("SEXO: %c\n", d.sexo);
    printf("CPF: %d\n", d.CPF);
    printf("DATA DE NASCIMENTO: (%d/%d/%d)\n", d.data_nasc.dia, d.data_nasc.mes, d.data_nasc.ano);
    printf("CODIGO DO SETOR DE TRABALHO: %d\n", d.codigo_trabalho);
    printf("CARGO: %s", d.cargo_trabalho);
    printf("SALARIO: R$%.3f", d.salario);
}

void main()
{
    Dados_Funcionarios dados_funcionarios;

    /*-------------------------------------------------------------------------------------------------------------------------*/
    // leitura de todos os dados
    printf("NOME: ");
    fgets(dados_funcionarios.Nome, 40, stdin);

    printf("IDADE: ");
    scanf("%d", &dados_funcionarios.idade);
    fflush(stdin);

    printf("SEXO: [M/F] ");
    scanf("%c", &dados_funcionarios.sexo);
    fflush(stdin);

    printf("CPF: ");
    scanf("%d", &dados_funcionarios.CPF);
    fflush(stdin);

    printf("DATA DE NASCIMENTO: (dd / mm / aaaa) ");
    scanf("%d %d %d", &dados_funcionarios.data_nasc.dia, &dados_funcionarios.data_nasc.mes, &dados_funcionarios.data_nasc.ano);
    fflush(stdin);
    
    printf("CODIGO DO SETOR DE TRABALHO (0-99): ");
    scanf("%d", &dados_funcionarios.codigo_trabalho);
    fflush(stdin);

    printf("CARGO: ");
    fgets(dados_funcionarios.cargo_trabalho, 30, stdin);

    printf("SALARIO: R$");
    scanf("%f", &dados_funcionarios.salario);
    /*--------------------------------------------------------------------------------------------------------------------------*/
    printf("\n");
    // exibição dos dados recolhidos
    impressao_dados(dados_funcionarios);
    printf("\n");
    
}