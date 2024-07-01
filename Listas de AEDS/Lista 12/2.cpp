#include <iostream>
#include <stdexcept>
#include <iomanip>

class Horario {
protected:
    int hora;
    int minuto;
    int segundo;

    bool horarioValido(int h, int m, int s) {
        return (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60);
    }

public:
    // Construtor padrão
    Horario() : hora(0), minuto(0), segundo(0) {}

    // Construtor com parâmetros
    Horario(int h, int m, int s) {
        if (!horarioValido(h, m, s)) {
            throw std::invalid_argument("Horário inválido");
        }
        hora = h;
        minuto = m;
        segundo = s;
    }

    // Métodos gets
    int getHora() const { return hora; }
    int getMinuto() const { return minuto; }
    int getSegundo() const { return segundo; }

    // Método para adicionar um horário
    void adicionarHorario(const Horario& h) {
        segundo += h.segundo;
        minuto += segundo / 60;
        segundo %= 60;

        minuto += h.minuto;
        hora += minuto / 60;
        minuto %= 60;

        hora += h.hora;
        hora %= 24; // Considera que o dia tem 24 horas
    }

    // Sobrecarga do operador +
    Horario operator+(const Horario& h) const {
        Horario novoHorario(hora, minuto, segundo);
        novoHorario.adicionarHorario(h);
        return novoHorario;
    }

    // Método para calcular a diferença entre dois horários
    Horario diferencaHorario(const Horario& h) const {
        int totalSegundos1 = hora * 3600 + minuto * 60 + segundo;
        int totalSegundos2 = h.hora * 3600 + h.minuto * 60 + h.segundo;

        int diferencaSegundos = totalSegundos1 - totalSegundos2;
        if (diferencaSegundos < 0) {
            diferencaSegundos += 24 * 3600; // Ajusta para diferença positiva
        }

        int h_dif = diferencaSegundos / 3600;
        diferencaSegundos %= 3600;
        int m_dif = diferencaSegundos / 60;
        int s_dif = diferencaSegundos % 60;

        return Horario(h_dif, m_dif, s_dif);
    }

    // Sobrecarga do operador -
    Horario operator-(const Horario& h) const {
        return diferencaHorario(h);
    }

    // Amigo para saída em formato hh:mm:ss
    friend std::ostream& operator<<(std::ostream& os, const Horario& h) {
        os << std::setw(2) << std::setfill('0') << h.hora << ":"
           << std::setw(2) << std::setfill('0') << h.minuto << ":"
           << std::setw(2) << std::setfill('0') << h.segundo;
        return os;
    }
};

// Exemplo de uso
int main() {
    try {
        Horario h1(12, 30, 45);
        Horario h2(2, 45, 15);

        std::cout << "Horário 1: " << h1 << std::endl;
        std::cout << "Horário 2: " << h2 << std::endl;

        Horario novoHorario = h1 + h2;
        std::cout << "Horário 1 + Horário 2: " << novoHorario << std::endl;

        Horario diferenca = h1 - h2;
        std::cout << "Diferença entre Horário 1 e Horário 2: " << diferenca << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
