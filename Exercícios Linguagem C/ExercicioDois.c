#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *arquivo = fopen("produtos.txt", "a");

    if (arquivo == NULL)
    {
        printf("Erro na escrita do arquivo.\n");
        return -1;
    }

    int produtos;   //%d
    int codigo;     //%d
    char nome[100]; //%s
    float valor;    //%f

    printf("Digite quantos produtos deseja cadastrar : ");
    scanf("%d", &produtos);

    for (int i = 1; i <= produtos; i++)
    
    {

        printf("Digite o codigo do produto : ");
        scanf("%d", &codigo);
        fprintf(arquivo, "%d", codigo);
        printf("Digite o nome do produto : ");
        scanf("%s", &nome);
        fprintf(arquivo, " %s", nome);
        printf("Digite o valor do produto : ");
        scanf("%f", &valor);
        fprintf(arquivo, " %.2f\n", valor);
    }

    fclose(arquivo);

    return 0;
}