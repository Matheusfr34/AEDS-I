#include <iostream>
#include <stdexcept>
#include <iomanip>

class Data {
protected:
    int ano;
    int mes;
    int dia;

public:
    // Construtor padrão
    Data() : ano(0), mes(0), dia(0) {}

    // Construtor com parâmetros
    Data(int a, int m, int d) {
        if (!dataValida(a, m, d)) {
            throw std::invalid_argument("Data inválida");
        }
        ano = a;
        mes = m;
        dia = d;
    }

    // Métodos gets
    int getAno() const { return ano; }
    int getMes() const { return mes; }
    int getDia() const { return dia; }

    // Método para validar uma data
    bool dataValida(int a, int m, int d) {
        if (m < 1 || m > 12) return false;
        if (d < 1 || d > 31) return false; // Simples validação de dia
        return true;
    }

    // Método amigo para saída em formato AAAA/MM/DD
    friend std::ostream& operator<<(std::ostream& os, const Data& d) {
        os << std::setw(4) << std::setfill('0') << d.ano << "/"
           << std::setw(2) << std::setfill('0') << d.mes << "/"
           << std::setw(2) << std::setfill('0') << d.dia;
        return os;
    }
};

class DataHora : public Data, public Horario {
public:
    // Construtor que recebe uma data e um horário
    DataHora(int a, int m, int d, int h, int mi, int s) : Data(a, m, d), Horario(h, mi, s) {}

    // Método para calcular a diferença entre a data-horário atual e outra data-horário
    Horario diferencaDataHora(const DataHora& dh) const {
        // Converte a data-horário atual para segundos desde a "época"
        int totalSegundos1 = ano * 365 * 24 * 3600 + mes * 30 * 24 * 3600 + dia * 24 * 3600 + hora * 3600 + minuto * 60 + segundo;
        // Converte a outra data-horário para segundos desde a "época"
        int totalSegundos2 = dh.ano * 365 * 24 * 3600 + dh.mes * 30 * 24 * 3600 + dh.dia * 24 * 3600 + dh.hora * 3600 + dh.minuto * 60 + dh.segundo;

        int diferencaSegundos = totalSegundos1 - totalSegundos2;
        if (diferencaSegundos < 0) {
            diferencaSegundos += 365 * 24 * 3600; // Ajusta para diferença positiva, considerando um ano aproximadamente
        }

        int d_dif = diferencaSegundos / (365 * 24 * 3600); // Anos de diferença aproximado
        diferencaSegundos %= (365 * 24 * 3600);
        int h_dif = diferencaSegundos / 3600;
        diferencaSegundos %= 3600;
        int m_dif = diferencaSegundos / 60;
        int s_dif = diferencaSegundos % 60;

        return Horario(d_dif, h_dif, m_dif, s_dif);
    }

    // Sobrecarga do operador - para calcular a diferença entre duas datas-horário
    Horario operator-(const DataHora& dh) const {
        return diferencaDataHora(dh);
    }

    // Método amigo para saída em formato AAAA/MM/DD-hh:mm:ss
    friend std::ostream& operator<<(std::ostream& os, const DataHora& dh) {
        os << static_cast<const Data&>(dh) << "-" << static_cast<const Horario&>(dh);
        return os;
    }
};

// Exemplo de uso
int main() {
    try {
        DataHora dh1(2024, 6, 30, 12, 30, 45);
        DataHora dh2(2023, 12, 25, 2, 45, 15);

        std::cout << "Data-Horário 1: " << dh1 << std::endl;
        std::cout << "Data-Horário 2: " << dh2 << std::endl;

        Horario diferenca = dh1 - dh2;
        std::cout << "Diferença entre Data-Horário 1 e Data-Horário 2: " << diferenca << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
