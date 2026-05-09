#include <stdio.h>
#include <stdlib.h>

struct Territorio
{
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    struct Territorio *territorio;
    int quantidade;

    printf("Quantos territorios deseja cadastrar? ");
    scanf("%d", &quantidade);

    territorio = (struct Territorio*) malloc(quantidade * sizeof(struct Territorio));
    if (territorio == NULL) {
    printf("Erro de memória!\n");
    return 1;
}

    for (int i = 0; i < quantidade; i++)
    {
        printf("\nTerritorio %d:\n", i + 1);

        printf("Digite o nome: ");
        scanf(" %29[^\n]", territorio[i].nome);

        printf("Digite a cor: ");
        scanf(" %9[^\n]", territorio[i].cor);

        printf("Digite o numero de tropas: ");
        scanf("%d", &territorio[i].tropas);
    }

    printf("\n--- Territorios cadastrados ---\n");

    for (int i = 0; i < quantidade; i++)
    {
        printf("\nTerritorio %d\n", i + 1);
        printf("Nome: %s\n", territorio[i].nome);
        printf("Cor: %s\n", territorio[i].cor);
        printf("Tropas: %d\n", territorio[i].tropas);
    }

    free(territorio);

    return 0;
}
