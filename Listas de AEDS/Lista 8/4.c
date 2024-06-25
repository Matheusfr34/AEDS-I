#include <stdio.h>
#include <string.h>

typedef struct {
    int codigo;
    char doacao;
    char nome[100];
    char autor[100];
    char editora[100];
    char area[100];
} Livro;

void cadastrarLivros(Livro exatas[], int *nExatas, Livro humanas[], int *nHumanas, Livro biologicas[], int *nBiologicas) {
    int i, n;
    Livro temp;

    printf("Quantos livros deseja cadastrar? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Cadastro do livro %d:\n", i + 1);
        printf("Código de catalogação: ");
        scanf("%d", &temp.codigo);
        printf("Doação (S/N): ");
        scanf(" %c", &temp.doacao);
        printf("Nome da obra: ");
        scanf(" %[^\n]", temp.nome);
        printf("Nome do autor: ");
        scanf(" %[^\n]", temp.autor);
        printf("Editora: ");
        scanf(" %[^\n]", temp.editora);
        printf("Área (exatas/humanas/biológicas): ");
        scanf(" %[^\n]", temp.area);

        if (strcmp(temp.area, "exatas") == 0) {
            exatas[*nExatas] = temp;
            (*nExatas)++;
        } else if (strcmp(temp.area, "humanas") == 0) {
            humanas[*nHumanas] = temp;
            (*nHumanas)++;
        } else if (strcmp(temp.area, "biológicas") == 0) {
            biologicas[*nBiologicas] = temp;
            (*nBiologicas)++;
        }
    }
}

void consultarLivro(Livro exatas[], int nExatas, Livro humanas[], int nHumanas, Livro biologicas[], int nBiologicas) {
    int codigo;
    char area[100];
    int i;
    Livro *vetor = NULL;
    int nLivros = 0;

    while (1) {
        printf("Digite o código de catalogação (-1 para encerrar): ");
        scanf("%d", &codigo);

        if (codigo == -1) {
            break;
        }

        printf("Digite a área (exatas/humanas/biológicas): ");
        scanf(" %[^\n]", area);

        if (strcmp(area, "exatas") == 0) {
            vetor = exatas;
            nLivros = nExatas;
        } else if (strcmp(area, "humanas") == 0) {
            vetor = humanas;
            nLivros = nHumanas;
        } else if (strcmp(area, "biológicas") == 0) {
            vetor = biologicas;
            nLivros = nBiologicas;
        } else {
            printf("Área inválida!\n");
            continue;
        }

        int encontrado = 0;
        for (i = 0; i < nLivros; i++) {
            if (vetor[i].codigo == codigo) {
                encontrado = 1;
                printf("Livro encontrado:\n");
                printf("Código de catalogação: %d\n", vetor[i].codigo);
                printf("Doação: %c\n", vetor[i].doacao);
                printf("Nome da obra: %s\n", vetor[i].nome);
                printf("Nome do autor: %s\n", vetor[i].autor);
                printf("Editora: %s\n", vetor[i].editora);
                printf("Área: %s\n", vetor[i].area);
                break;
            }
        }

        if (!encontrado) {
            printf("Livro não encontrado!\n");
        }
    }
}

int main() {
    Livro exatas[500], humanas[500], biologicas[500];
    int nExatas = 0, nHumanas = 0, nBiologicas = 0;

    cadastrarLivros(exatas, &nExatas, humanas, &nHumanas, biologicas, &nBiologicas);
    consultarLivro(exatas, nExatas, humanas, nHumanas, biologicas, nBiologicas);

    return 0;
}
