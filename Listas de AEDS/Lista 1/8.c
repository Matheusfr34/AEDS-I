#include <stdio.h>

int main(void) {
  float salario, aumento;
  char opc;
  printf("Informe o salário: ");
  scanf("%f", &salario);
  printf("Informe a opção de aumento: ");
  scanf(" %c", &opc);
  switch(opc) {
    case 'A':
      salario = salario + (salario * 0.08);
      printf("Novo salário: %.2f", salario);
      break;
    case 'B':
      salario = salario + (salario * 0.11);
      printf("Novo salário: %.2f", salario);
      break;
    case 'C':
      if (salario <= 1000) { 
        salario = salario + 350;
        printf("Novo salário: %.2f", salario);
        break;
      }
      if ( salario > 1000) { 
        salario = salario + 200;
        printf("Novo salário: %.2f", salario);
        break;
      }
    default:
    break;
  }
  
  return 0;
}