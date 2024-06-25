/* Escreva uma estrutura que contenha a representação para o dia, o mês e o ano de uma data. */
#include <stdio.h>

struct Tempo{
int dia, mes, ano;
} data;

int main() {
  printf("Digite um dia: ");
  scanf("%d", &data.dia);
  
  printf("Digite um mes: ");
  scanf("%d", &data.mes);
  
  printf("Digite um ano: ");
  scanf("%d", &data.ano);

  printf("Data informada: %02d/%02d/%02d", data.dia, data.mes, data.ano);
  
  return 0;
}