/* Utilizando as estruturas anteriores, escreva uma estrutura que combine as informações de data e hora. */

#include <stdio.h>

struct Tempo {
  int horas, minutos, segundos;
  
};

struct Data{
  int dia, mes, ano;
};

struct DataHora {
struct Data data;
struct Tempo tempo; 
} data_hora;

int main(void) {
  
 printf("Digite um dia: ");
 scanf("%d", &data_hora.data.dia);
  
 printf("Digite um mes: ");
 scanf("%d", &data_hora.data.mes);
  
 printf("Digite um ano: ");
 scanf("%d", &data_hora.data.ano);

printf("Digite a hora: ");
 scanf("%d", &data_hora.tempo.horas);
  
 printf("Digite os minutos: ");
 scanf("%d", &data_hora.tempo.minutos);
  
 printf("Digite o mês: ");
 scanf("%d", &data_hora.tempo.segundos);



 printf("\nData informada: %02d/%02d/%02d\n", data_hora.data.dia, data_hora.data.mes, data_hora.data.ano);
 printf("Hora informada: %02d:%02d:%02d", data_hora.tempo.horas, data_hora.tempo.minutos, data_hora.tempo.segundos);

  return 0;
}