/* Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente, e-mail, número de horas de acesso, página (S-sim ou N-não). Elaborar um algoritmo que calcule e mostre um relatório contendo o valor a pagar por cada cliente,
sabendo-se que as primeiras 20 horas de acesso é R$35,00 e as horas que excederam tem o custo de R$2,50 por hora. Para os clientes que têm página, adicionar R$40,00. Inserir um conjunto de registros (máximo 500). */

#include <stdio.h>
#include <string.h>

typedef struct {
  char codigo_cliente[10];
  char email[40];
  char pagina[4];
  float horas;
  } registro;

void dados(registro *clientes, int n) {
  for(int i = 0; i < n; i++){
    printf("Informe o código de cliente: ");
    scanf("%s", clientes[i].codigo_cliente);
    getchar();
    printf("Informe o seu e-mail: ");
    scanf("%s", clientes[i].email);
    getchar();
    printf("Possui página? ");
    scanf("%s", clientes[i].pagina);
    getchar();
    printf("Digite o tempo de consumo: ");
    scanf("%f", &clientes[i].horas);
  }
}

float Calcular_Valor(registro clientes){
  
  float valor = 35;
  
  if(clientes.horas > 20) {
    valor+= (clientes.horas - 20) * 2.5;
  } 
  
  if (strcmp (clientes.pagina, "S") == 0) {
    valor+=40; //Adiciona 40 reais, caso tenha página
  }
 
  return valor;
}

void Relatorio(registro *clientes, int n) {
  for(int i = 0; i < n; i++) { }
  printf("Cliente i");
}

int main(void) {
  
registro clientes[10];
float valor;
int quantidade;

printf("Digite a quantidade de clientes (máximo 500): ");
scanf("%i", &quantidade);

dados(clientes, quantidade);

for(int i = 0; i < 2; i++) {
  printf("\nValor a pagar cliente %i: %f\n", i +1, valor);
}
  
  return 0;
}