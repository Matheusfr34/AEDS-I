#include <stdio.h>
int main() {
float p_compra, p_venda, lucro, t_compra=0.0, t_venda=0.0, t_lucro=0.0; 
int lucro_1=0.0, lucro_2=0.0, lucro_3=0.0;
  
  do{
    printf("Digite o preço de compra: ");
    scanf("%f", &p_compra);
    
    if (p_compra == 0) {
      printf("Fim.\n");
      break;
    }
    if (p_compra < 0) {
      printf("Digite o preço de compra novamente: ");
      scanf("%f", &p_compra);
    }
    
    printf("Digite o preço de venda: ");
    scanf("%f", &p_venda);
   
    if (p_venda < 0) {
      printf("Digite o preço de venda novamente: ");
      scanf("%f", &p_venda);
    }
  
    // Lucro 
    lucro = p_venda - p_compra;

    // Atualização de valores
    t_compra+=p_compra;
    t_venda+=p_venda;
    t_lucro+=lucro;

    // Cálculo de faixas 
    if (lucro < 0.1 * p_compra) {
      lucro_1++;
    }
    else if (lucro >= 0.1 * p_compra && lucro <= 0.2 * p_compra) {
      lucro_2++;
    }
    else {
      lucro_3++;
    }
    
  } while (1);

  // Saída de Dados
  printf("Lucro < 10%%: %d\n", lucro_1);
  printf("10%% <= Lucro <= 20%%: %d\n", lucro_2);
  printf("Lucro > 20%%: %d\n", lucro_3);
  printf("Valor total de compra: %.2f\n", t_compra);
  printf("Valor total de venda: %.2f\n", t_venda);
  printf("Lucro total: %.2f\n", t_lucro);

return 0;
}