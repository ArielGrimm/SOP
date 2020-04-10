#include <stdio.h>
#include <stdlib.h>

int main() 
{

    FILE *arquivo = fopen("produtos.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro de leitura do arquivo.\n");
        return -1;
    }

    int codigo;     //%d
    char nome[100]; //%s
    double valor;   //%f

    while (feof(arquivo) == 0)
    {
        fscanf(arquivo, "%d %s %lf", &codigo, &nome, &valor);
        printf("%d %s R$%.2f\n", codigo, nome, valor);
    }

    fclose(arquivo);

    return 0;
}