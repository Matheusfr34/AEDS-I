#include <stdio.h>

void Ajustar(int *a, int *b) {
   if (*a < *b) {
      int temp = *a;
      *a = *b;
      *b = temp;
   }
}

int main(){
   
   int x, y;
   
   printf("Digite o primeiro número inteiro: ");
   scanf("%d", &x);
   printf("Digite o segundo número inteiro: ");
   scanf("%d", &y);
   
   Ajustar(&x, &y);

   printf("O maior é: %d\n", x);
   printf("O menor é: %d\n", y);
   
   return 0;
}
