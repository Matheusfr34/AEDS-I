#include <stdio.h>
int fatorial (int num){
  if(num == 0) return 1;
  else return num * fatorial(num-1);
}  
int main(){
  int num1;
  scanf("%i", &num1);
  printf("%i", fatorial(num1));
  return 0;
}