#include <stdio.h>

// Função para calcular o fatorial de um número
long double fatorial(int n) {
  long double f = 1;
  for(int i = 1; i <= n; ++i) {
    f *= i;
  }
  return f;
}

int main(void) {
  int N;
  long double E = 1.0;  // Inicializa E com o valor do primeiro termo da série

  // Solicita ao usuário que insira um valor inteiro e positivo para N
  printf("Informe um valor inteiro e positivo N: ");
  scanf("%d", &N);

  // Verifica se o valor inserido é positivo
  if (N < 0) {
    printf("Por favor, insira um valor positivo.\n");
    return 1;  // Sai do programa se o valor não for positivo
  }

  // Calcula os termos da série e acumula em E
  for (int i = 1; i <= N; ++i) {
    E += 1.0 / fatorial(i);
  }

  // Exibe o valor de E
  printf("O valor de E é: %.10Lf\n", E);

  return 0;
}
