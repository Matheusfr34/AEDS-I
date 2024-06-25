#include <stdio.h>
void mediasalarial(void) {
  float salario, media= 0.0;
  int pessoas=0, filhos;
  char flag;

  do {
    do {
      printf("Digite um salário: ");
      scanf("%f", &salario);
    } while (salario < 0);
    media+=salario;
    do {
      printf("Digite o número de filhos: ");
      scanf("%d", &filhos);
    } while (filhos < 0);
    pessoas+=1+filhos;
    do {
      printf("Inserir novos dados? (S/N): ");
      scanf("%c", &flag);
    } while (flag != 'S' && flag != 'N' && flag != 's' && flag != 'n');
  } while (flag == 'S' || flag == 's');
  media/=pessoas;
  printf("A média salarial é de %.2f", media);
}

int main(){
  mediasalarial();
  return 0;
}
 