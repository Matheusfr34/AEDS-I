#include <stdio.h>

// Estrutura para armazenar os dados de um aluno
struct Aluno {
    int matricula;
    char telefone[20]; // Assumindo que o telefone terá no máximo 20 caracteres
};

// Função para inserir dados de alunos em um arquivo texto
void inserirDados(FILE *arquivo) {
    struct Aluno aluno;
    char continuar;

    // Solicita ao usuário que insira os dados dos alunos
    do {
        printf("Digite a matricula do aluno: ");
        scanf("%d", &aluno.matricula);

        printf("Digite o telefone do aluno: ");
        scanf("%s", aluno.telefone);

        // Escreve os dados do aluno no arquivo
        fprintf(arquivo, "%d %s\n", aluno.matricula, aluno.telefone);

        printf("Dados do aluno armazenados com sucesso.\n");

        // Verifica se o usuário deseja continuar inserindo dados
        printf("Deseja inserir mais dados? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
}

// Função para ler e exibir dados de alunos de um arquivo texto
void lerDados(FILE *arquivo) {
    struct Aluno aluno;

    // Lê e exibe os dados de cada aluno do arquivo
    printf("\n=== Dados dos Alunos ===\n");
    while (fscanf(arquivo, "%d %s", &aluno.matricula, aluno.telefone) != EOF) {
        printf("Matricula: %d, Telefone: %s\n", aluno.matricula, aluno.telefone);
    }
    printf("\n");
}

int main() {
    FILE *arquivo;
    char opcao;

    // Abre o arquivo para escrita (ou cria um novo se não existir)
    arquivo = fopen("alunos.txt", "a+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Retorna 1 para indicar erro
    }

    // Menu de opções para o usuário
    printf("Selecione uma opcao:\n");
    printf("1. Inserir dados de alunos\n");
    printf("2. Ler dados de alunos\n");
    printf("Opcao: ");
    scanf(" %c", &opcao);

    // Executa a opção selecionada pelo usuário
    switch (opcao) {
        case '1':
            inserirDados(arquivo);
            break;
        case '2':
            lerDados(arquivo);
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    // Fecha o arquivo após o uso
    fclose(arquivo);

    return 0; // Retorna 0 indicando sucesso
}
