#include <stdio.h>
#include <math.h>

void calcCircunferencia(float R, float *compr, float *area) {
    *compr = 2 * M_PI * R;
    *area = M_PI * R * R;
}

int main() {
    float R, comprimento, area;

    // Leitura do raio
    printf("Digite o valor do raio: ");
    scanf("%f", &R);

    // Chamada da função para calcular comprimento e área
    calcCircunferencia(R, &comprimento, &area);

    // Exibindo os resultados
    printf("Comprimento da circunferência: %.2f\n", comprimento);
    printf("Área da circunferência: %.2f\n", area);

    return 0;
}
