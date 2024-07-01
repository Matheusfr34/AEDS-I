#include <iostream>
#include <stdexcept>
#include <ctime>
#include <iomanip>

class Data {
protected:
    int ano;
    int mes;
    int dia;

    bool dataValida(int a, int m, int d) {
        if (m < 1 || m > 12) return false;
        if (d < 1 || d > 31) return false;
        
        if (m == 2) {
            bool bissexto = (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
            if (bissexto) return d <= 29;
            else return d <= 28;
        }
        
        if (m == 4 || m == 6 || m == 9 || m == 11) return d <= 30;
        
        return true;
    }

public:
    Data(int a, int m, int d) {
        if (!dataValida(a, m, d)) {
            throw std::invalid_argument("Data inválida");
        }
        ano = a;
        mes = m;
        dia = d;
    }

    int getAno() const { return ano; }
    int getMes() const { return mes; }
    int getDia() const { return dia; }

    void adicionarDias(int dias) {
        struct tm data = {0};
        data.tm_year = ano - 1900;
        data.tm_mon = mes - 1;
        data.tm_mday = dia + dias;

        mktime(&data);

        ano = data.tm_year + 1900;
        mes = data.tm_mon + 1;
        dia = data.tm_mday;
    }

    Data operator+(int dias) const {
        Data novaData(ano, mes, dia);
        novaData.adicionarDias(dias);
        return novaData;
    }

    friend std::ostream& operator<<(std::ostream& os, const Data& data) {
        os << std::setw(2) << std::setfill('0') << data.dia << "/"
           << std::setw(2) << std::setfill('0') << data.mes << "/"
           << data.ano;
        return os;
    }

    int diferencaDias(const Data& outra) const {
        struct tm data1 = {0};
        struct tm data2 = {0};
        
        data1.tm_year = ano - 1900;
        data1.tm_mon = mes - 1;
        data1.tm_mday = dia;
        
        data2.tm_year = outra.ano - 1900;
        data2.tm_mon = outra.mes - 1;
        data2.tm_mday = outra.dia;
        
        time_t tempo1 = mktime(&data1);
        time_t tempo2 = mktime(&data2);
        
        double diferenca = difftime(tempo1, tempo2) / (60 * 60 * 24);
        return std::abs(static_cast<int>(diferenca));
    }

    int operator-(const Data& outra) const {
        return diferencaDias(outra);
    }
};

// Exemplo de uso
int main() {
    try {
        Data data1(2023, 6, 30);
        Data data2(2023, 1, 1);

        std::cout << "Data 1: " << data1 << std::endl;
        std::cout << "Data 2: " << data2 << std::endl;

        Data novaData = data1 + 10;
        std::cout << "Data 1 + 10 dias: " << novaData << std::endl;

        int diferenca = data1 - data2;
        std::cout << "Diferença em dias entre Data 1 e Data 2: " << diferenca << " dias" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
