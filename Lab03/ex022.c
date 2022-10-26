#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, tempo_servico;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Por quanto anos trabalhou? ");
    scanf("%d", &tempo_servico);
    if (idade >= 65 || tempo_servico >= 30)
    {
        printf("Voce pode se aposentar! ");

    } else if (idade >= 60 && tempo_servico >= 25)
    {
        printf("Voce pode se aposentar! ");
    } else
    {
        printf("Voce ainda nao pode se aposentar! ");
    }
    return 0;

}