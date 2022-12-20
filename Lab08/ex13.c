#include <stdio.h>

#define NUM_DADOS 5

typedef struct 
{
    int codigo;
    char nome[16];
    float preco;
    int quantidade;

} Dados;

void main()
{
    Dados dados[NUM_DADOS];
    int i;
    // leitura dos dados
    printf("\n\tCADASTRO DOS PRODUTOS\n\n");
    for (i = 0; i < NUM_DADOS; i++) {
        printf("Informe o [%do] codigo [1-99]: ", i + 1);
        scanf("%d", &dados[i].codigo);
        fflush(stdin);

        printf("Informe o nome do produto: ");
        scanf("%15s", &dados[i].nome);
        fflush(stdin);

        printf("Informe o preco de [%s ]: R$", dados[i].nome);
        scanf("%f", &dados[i].preco);

        printf("Informe a quantidade de [%s ]: ", dados[i].nome);
        scanf("%d", &dados[i].quantidade);
        fflush(stdin);
        printf("\n");
    }

    int codigo_busca[NUM_DADOS], quantidade_busca[NUM_DADOS];
    i = 0;

    printf("\n\tLEITURA DO PEDIDO\n\n");
    while (i < NUM_DADOS) { 
        // Verificação do código
        printf("Digite o codigo do produto que deseja buscar[1-99]: (0 PARA ENCERRAR) ");
        scanf("%d", &codigo_busca[i]);
        if (codigo_busca[i] < 1 || codigo_busca[i] > 99) {
            printf("CODIGO INVALIDO\n");
            break;
        }
        // Leitura da quantidade de produto que o vendedor deseja fazer
        printf("Digite a quantidade desse produto que deseja fazer o pedido: ");
        scanf("%d", &quantidade_busca[i]);

        if (quantidade_busca[i] > dados[i].quantidade) {
            printf("ERRO! QUANTIDADE MAIOR QUE O ESTOQUE\n");
            break;
        }
        else if (quantidade_busca[i] <= dados[i].quantidade && quantidade_busca[i] > 0) {
            dados[i].quantidade = dados[i].quantidade - quantidade_busca[i]; // atualizando o estoque

            printf("CODIGO: %d \t QUANTIDADE NO ESTOQUE ATUALIZADA: %d\n", codigo_busca[i], dados[i].quantidade); // informando ao usuário
        }
        
        printf("\n");
        i++;
    }

    printf("\nPROGRAMA ENCERRADO\n\n");
    
}