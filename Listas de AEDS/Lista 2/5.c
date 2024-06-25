#include <stdio.h>

int main(void) {
  float salario, soma_salarios = 0, maior_salario = 0;
  int num_filhos, soma_filhos = 0, contador_pessoas = 0, contador_salario_ate_100 = 0;

  while (1) {
    // Solicita ao usuário que insira o salário e o número de filhos
    printf("Informe o salário (ou um valor negativo para encerrar): ");
    scanf("%f", &salario);

    // Verifica se o salário é negativo para encerrar a entrada de dados
    if (salario < 0) {
      break;
    }

    printf("Informe o número de filhos: ");
    scanf("%d", &num_filhos);

    // Acumula o total de salários e número de filhos
    soma_salarios += salario;
    soma_filhos += num_filhos;
    contador_pessoas++;

    // Verifica e atualiza o maior salário
    if (salario > maior_salario) {
      maior_salario = salario;
    }

    // Conta quantas pessoas têm salário até R$100,00
    if (salario <= 100) {
      contador_salario_ate_100++;
    }
  }

  if (contador_pessoas == 0) {
    printf("Nenhum dado foi inserido.\n");
  } else {
    // Calcula as médias
    float media_salarios = soma_salarios / contador_pessoas;
    float media_filhos = (float)soma_filhos / contador_pessoas;
    float percentual_salario_ate_100 = ((float)contador_salario_ate_100 / contador_pessoas) * 100;

    // Exibe os resultados
    printf("Média do salário da população: %.2f\n", media_salarios);
    printf("Média do número de filhos: %.2f\n", media_filhos);
    printf("Maior salário: %.2f\n", maior_salario);
    printf("Percentual de pessoas com salário até R$100,00: %.2f%%\n", percentual_salario_ate_100);
  }

  return 0;
}
