#include <stdio.h>

int main(void) {
  int v_max, multa = 0;
  float v_mot, v_ult = 0;

  // Solicita a velocidade máxima permitida e a velocidade do motorista
  printf("Informe a velocidade máxima permitida: \n");
  scanf("%i", &v_max);
  printf("Informe a velocidade do motorista: \n");
  scanf("%f", &v_mot);

  // Calcula a diferença entre a velocidade do motorista e a velocidade máxima
  v_ult = v_mot - v_max;

  // Verifica se o motorista respeitou a lei ou se deve ser multado
  if(v_mot <= v_max){
    printf("Motorista respeitou a lei\n");
  } else if(v_ult <= 10) {
    printf("Multa: 50 reais\n");
  } else if(v_ult <= 30){
    printf("Multa: 100 reais\n");
  } else {
    printf("Multa: 200 reais\n");
  }

  return 0;
}
