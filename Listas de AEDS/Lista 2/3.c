#include <stdio.h>

int main(void) {
  float salario, media_s=0.0, total_f=0.0, quant_f=0.0;
  int pessoas=0, filhos=0;

  do{
    printf("Digite o salário (Salário neg. para encerrar): ");
    scanf("%f", &salario);
   
    if(salario > 0) {
    media_s+=salario;
    printf("Digite o número de filhos: ");
    scanf("%d", &filhos); }
      
    if(filhos >= 0) {
      total_f+=filhos; 
      quant_f++; 
    }
    else {
          printf("Quantidade inválida. Digite novamente: ");
          scanf("%d", &filhos); }
      if (salario < 0) {
      printf("Salário Negativo.");
    }
    
  } while (salario > 0);
    total_f=total_f/(quant_f);
    printf("\nSalário: %.2f", media_s);
    printf("\nFilhos: %.2f", total_f);
  return 0;
}