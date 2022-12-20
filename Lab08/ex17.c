#include <stdio.h>
#include <string.h>

#define NUM_CADASTROS 5

typedef struct 
{
    char rua[20];
    char bairro[30];
    char cidade[30];
    char estado[30];
    int CEP[30];

} Endereco;

typedef struct 
{
    Endereco endereco;

    char nome[50];
    char sexo;
    char estado_civil[20];
    int num_identidade;
    int CPF;
    int idade;
    long int telefone;
    float salario;

} Cadastro;

void main()
{
    Cadastro cadastro[NUM_CADASTROS];
    int i = 0;

    // leitura de todos os cadastros
    for (i = 0; i < NUM_CADASTROS; i++) {
        printf("\n\tDADOS INICIAIS DO [%do] CADASTRO\n\n", i + 1);

        printf("Digite o [%do] nome: ", i + 1);
        fgets(cadastro[i].nome, 50, stdin);

        printf("Digite o [%do] sexo [M/F]: ", i + 1);
        scanf("%c", &cadastro[i].sexo);
        fflush(stdin);

        printf("Digite o [%do] estado civil: ", i + 1);
        fgets(cadastro[i].estado_civil, 20, stdin);

        printf("Digite o [%do] numero de identidade: ", i + 1);
        scanf("%d", &cadastro[i].num_identidade);

        printf("Digite o [%do] numero de CPF: ", i + 1);
        scanf("%d", &cadastro[i].CPF);

        printf("Digite a [%do] idade: ", i + 1);
        scanf("%d", &cadastro[i].idade);
        
        printf("Digite o [%do] numero de telefone: ", i + 1);
        scanf("%d", &cadastro[i].telefone);

        printf("Digite o [%do] salario: R$", i + 1);
        scanf("%f", &cadastro[i].salario);
        fflush(stdin);
        printf("\n");

        printf("\tENDERECO\n");

        printf("Digite a [%da] RUA: ", i + 1);
        fgets(cadastro[i].endereco.rua, 30, stdin);

        printf("Digite o [%do] BAIRRO: ", i + 1);
        fgets(cadastro[i].endereco.bairro, 30, stdin);

        printf("Digite a [%da] CIDADE: ", i + 1);
        fgets(cadastro[i].endereco.cidade, 30, stdin);

        printf("Digite o [%do] ESTADO: ", i + 1);
        fgets(cadastro[i].endereco.estado, 30, stdin);

        printf("Digite o [%do] CEP: ", i + 1);
        scanf("%d", &cadastro[i].endereco.CEP);
        fflush(stdin);
        printf("\n");

    }

    // percorrendo o vetor para atualizar quem tem maior idade
    int maior_idade = 0;
    char nome_maior_idade[50];
    maior_idade = cadastro[0].idade; // a primeira idade é também a maior idade

    for (i = 0; i < NUM_CADASTROS; i++) {
        if (cadastro[i].idade > maior_idade) {
            maior_idade = cadastro[i].idade;
            strcpy(nome_maior_idade, cadastro[i].nome);
        }
    }
    printf("PESSOA COM MAIOR IDADE: %d anos\t%s\n", maior_idade, nome_maior_idade);

    // busca pelas pessoas cadastradas com sexo masculino
    char nomes_masculinos[50][NUM_CADASTROS]; 

    printf("\nPESSOAS DO SEXO MASCULINO\n\n");
    for (i = 0; i < NUM_CADASTROS; i++) {
        if (cadastro[i].sexo == 'M' || cadastro[i].sexo == 'm') 
            printf("%s", strcpy(nomes_masculinos[i], cadastro[i].nome));    
    }

    // encontrando salário maior do que 1000R$
    char nomes_salarios_maiores_1000[50][NUM_CADASTROS];
    printf("\nPESSOAS COM SALARIO MAIOR DO QUE 1000R$\n\n");
    for (i = 0; i < NUM_CADASTROS; i++) {
        if (cadastro[i].salario > 1000)
            printf("%s", strcpy(nomes_salarios_maiores_1000[i], cadastro[i].nome));

    }

    // imprimindo os dados da pessoa cuja identidade é igual a um valor n
    int n;
    printf("Digite um numero de identidade: ");
    scanf("%d", &n);

    printf("\nDADOS DA PESSOA COM ESSE NUMERO DE IDENTIDADE\n");
    for (i = 0; i < NUM_CADASTROS; i++) {
        if (n == cadastro[i].num_identidade) {
            printf("NOME: %s", cadastro[i].nome);
            printf("IDADE: %d\n", cadastro[i].idade);
            printf("CIDADE: %s", cadastro[i].endereco.cidade);
            
        }
    }

    printf("\n\n");
}
