#include <stdio.h>
#include <math.h>

int main() {
  float L1,L2,L3;
  printf("Digite o valor dos 3 lados de um triângulo: \n");
  scanf("%f\n %f\n %f", &L1, &L2, &L3);
  if((L1>0) && (L2>0) && (L3>0)
    && (L1<(L2+L3)) 
    && (L2<(L1+L3))
    && (L3<(L1+L2))) {
    printf("É triângulo");
  } else {
    printf("Os valores informados não formam um triângulo!\n");
  }
  if((L1==L2) && (L2==L3))
    printf("\nEquilátero");
  else if (L1==L2 || L2||L3 || L3==L1)
    printf ("\nIsósceles");
  else if (L1!=L2 && L2!=L3 && L3!=L1)
    printf ("\nEscaleno");
  float A1 = acos((L2*L2+L3*L3-L1*L1)/(2*L2*L3)), A2 = acos((L3*L3+L1*L1-L2*L2)/(2*L3*L1)), A3 = acos((L1*L1+L2*L2-L3*L3)/(2*L1*L2));
  printf("\nA1=%.2f A2=%.2f A3=%.2f", A1*180/M_PI, A2*180/M_PI, A3*180/M_PI);
  if (A1 < M_PI/2 && A2 < M_PI/2 && A3 < M_PI/2) {
    printf ("\nAgudo");
  } else if (A1==M_PI/2 || A2==M_PI/2 || A3==M_PI/2){
    printf ("\nReto");
  } else {
    printf ("\nObtuso");
  }
  return 0;
}