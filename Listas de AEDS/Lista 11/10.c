/* Escreva uma estrutura que contém uma representação para a venda de um produto que possui os seguintes atributos: nome, preço, quantidade e a data e hora. Utilize a estrutura anterior para representar a data e hora. */

#include <stdio.h>
struct Vendas {
  char nome[100];
  float preco;
  int quantidade;
};

struct Data {
  int dia;
  int mes;
  int ano;
};

struct Tempo {
  int hora;
  int minutos;
  int segundos;
};

int main(void) {
  
  return 0;
}