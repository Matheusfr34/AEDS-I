#include <iostream>
#include <stdexcept>

class Data {
protected:
    int ano;
    int mes;
    int dia;

    bool validarData(int ano, int mes, int dia) {
        if (ano < 1) return false;  // Ano inválido
        if (mes < 1 || mes > 12) return false;  // Mês inválido

        // Dias por mês considerando anos bissextos
        int diasPorMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        // Ajusta fevereiro para anos bissextos
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            diasPorMes[1] = 29;
        }

        if (dia < 1 || dia > diasPorMes[mes - 1]) return false;  // Dia inválido

        return true;
    }

public:
    Data(int ano, int mes, int dia) {
        if (!validarData(ano, mes, dia)) {
            throw std::invalid_argument("Data inválida");
        }
        this->ano = ano;
        this->mes = mes;
        this->dia = dia;
    }

    int getAno() const { return this->ano; }
    int getMes() const { return this->mes; }
    int getDia() const { return this->dia; }

    void setAno(int ano) {
        if (!validarData(ano, this->mes, this->dia)) {
            throw std::invalid_argument("Ano inválido");
        }
        this->ano = ano;
    }

    void setMes(int mes) {
        if (!validarData(this->ano, mes, this->dia)) {
            throw std::invalid_argument("Mês inválido");
        }
        this->mes = mes;
    }

    void setDia(int dia) {
        if (!validarData(this->ano, this->mes, dia)) {
            throw std::invalid_argument("Dia inválido");
        }
        this->dia = dia;
    }

    void printData() const {
        std::cout << this->ano << "-" << (this->mes < 10 ? "0" : "") << this->mes << "-" << (this->dia < 10 ? "0" : "") << this->dia << std::endl;
    }
};

int main() {
    try {
        Data data(2024, 6, 28);
        data.printData();
    } catch (std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
