#include <stdio.h>
void Maior(int num1, int num2, int num3) {

if(num1 > num2 && num1 > num3 && num2 > num3) {
  printf("Ordem crescente: %d %d %d", num3, num2, num1);
} 
else if (num1 > num2 && num1 > num3 && num3 > num2) {
  printf("Ordem crescente: %d %d %d", num2, num3, num1);
}
if(num2 > num1 && num2 > num3 && num1 > num3) {
  printf("Ordem crescente: %d %d %d", num3, num1, num2);
} 
else if (num2 > num1 && num2 > num3 && num3 > num1) {
  printf("Ordem crescente: %d %d %d", num1, num3, num2);
}
if(num3 > num1 && num3 > num2 && num1 > num2) {
  printf("Ordem crescente: %d %d %d", num2, num1, num3);
} 
else if (num3 > num1 && num3 > num2 && num2 > num1) {
  printf("Ordem crescente: %d %d %d", num1, num2, num3);
}
  
  }

int main() {
  
  int num1, num2, num3, N, i=1;
  printf("Digite a quantidade de conjuntos: ");
  scanf("%d", &N);

  while(i<=N) {
    printf("\nDigite os 3 números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    Maior(num1, num2, num3);
    
    i++;
    
  }

return 0;
}