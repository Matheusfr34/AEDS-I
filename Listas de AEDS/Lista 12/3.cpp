#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <ctime>

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

class DataHora : public Data, public Horario {
public:
    // Construtor que recebe uma data e um horário
    DataHora(int a, int m, int d, int h, int mi, int s) : Data(a, m, d), Horario(h, mi, s) {}

    // Método para calcular a diferença entre a data-horário atual e outra data-horário
    Horario diferencaDataHora(const DataHora& dh) const {
        // Converte a data-horário atual para segundos desde a "época"
        std::tm tm1 = {0};
        tm1.tm_year = ano - 1900;
        tm1.tm_mon = mes - 1;
        tm1.tm_mday = dia;
        tm1.tm_hour = hora;
        tm1.tm_min = minuto;
        tm1.tm_sec = segundo;
        std::time_t time1 = std::mktime(&tm1);

        // Converte a outra data-horário para segundos desde a "época"
        std::tm tm2 = {0};
        tm2.tm_year = dh.ano - 1900;
        tm2.tm_mon = dh.mes - 1;
        tm2.tm_mday = dh.dia;
        tm2.tm_hour = dh.hora;
        tm2.tm_min = dh.minuto;
        tm2.tm_sec = dh.segundo;
        std::time_t time2 = std::mktime(&tm2);

        // Calcula a diferença em segundos
        std::time_t diferenca = std::difftime(time1, time2);

        // Converte a diferença de segundos para horas, minutos e segundos
        int h_dif = diferenca / 3600;
        diferenca %= 3600;
        int m_dif = diferenca / 60;
        int s_dif = diferenca % 60;

        return Horario(h_dif, m_dif, s_dif);
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
