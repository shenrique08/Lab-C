#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    long int cod_id_produto; // código de identificação do produto
    char nome_produto[50];
    long int qtd_estoque;
    float preco_venda;

} Produto;


int main()
{
    int N_produtos;

    printf("\nDigite a quantidade de produtos que deseja cadastrar: ");
    scanf("%d", &N_produtos);
    fflush(stdin);

    Produto *produto = calloc(N_produtos, sizeof(*produto));

    // cadastro dos produtos
    printf("\n\tCADASTRO DE PRODUTO\n");
    for (int i = 0; i < N_produtos; i++) 
    {
        printf("\nDigite o nome do [%do] produto: ", i + 1);
        fgets(produto[i].nome_produto, 50, stdin);

        printf("Digite o codigo de identificacao do [%do] produto: ", i + 1);
        scanf("%d", &produto[i].cod_id_produto);

        printf("Digite a quantidade disponivel no estoque do [%do] produto: ", i + 1);
        scanf("%d", &produto[i].qtd_estoque);

        printf("Digite o valor de venda do [%do] produto: R$", i + 1);
        scanf("%f", &produto[i].preco_venda);
        fflush(stdin);

    }


    // varrendo o vetor para encontrar o que foi pedido
    int maior_preco_de_venda = produto[0].preco_venda;
    int posicao_maior_preco_venda = 0;

    int maior_qtd_estoque = produto[0].qtd_estoque;
    int posicao_maior_qtd_estoque = 0;

    printf("\n");
    for (int i = 0; i < N_produtos; i++) 
    {
        if (produto[i].preco_venda > maior_preco_de_venda) 
            posicao_maior_preco_venda = i;

        if (produto[i].qtd_estoque > maior_qtd_estoque)
            posicao_maior_qtd_estoque = i;
    }


    printf("Produto com maior preco de venda: \t%s", produto[posicao_maior_preco_venda].nome_produto);
    printf("Produto com maior quantidade disponivel no estoque: \t%s\n", produto[posicao_maior_qtd_estoque].nome_produto);
    
    free(produto);
    return 0;
}