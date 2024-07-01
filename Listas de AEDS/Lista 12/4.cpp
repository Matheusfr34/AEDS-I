#ifndef BANCO_HPP
#define BANCO_HPP

#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

class Conta {
protected:
    int numero;
    float saldo;
    string PIX;
public:
    Conta(int numero) : numero(numero), saldo(0.0) {}

    int getConta() const { return numero; }
    float getSaldo() const { return saldo; }
    void sacar(float valor) {
        if (valor <= saldo) {
            saldo -= valor;
        } else {
            throw invalid_argument("Saldo insuficiente.");
        }
    }
    void depositar(float valor) {
        saldo += valor;
    }
};

class Corrente : public Conta {
public:
    Corrente(int numero) : Conta(numero) {}
};

class Poupanca : public Conta {
private:
    vector<int> aniversarios;
    vector<float> valores;
public:
    Poupanca(int numero) : Conta(numero) {}

    const vector<int>& getAniversarios() const { return aniversarios; }
    void aplicaJuros() {
        for (size_t i = 0; i < aniversarios.size(); ++i) {
            saldo += valores[i];
        }
    }
};

class Especial : public Corrente {
private:
    float limite;
public:
    Especial(int numero, float limite) : Corrente(numero), limite(limite) {}

    float getLimite() const { return limite; }
};

class Pessoa {
protected:
    string nome;
    vector<Conta*> contas;
public:
    Pessoa(const string& nome) : nome(nome) {}

    string getNome() const { return nome; }
    const vector<Conta*>& getContas() const { return contas; }

    void adicionarConta(Conta* conta) {
        contas.push_back(conta);
    }
};

class Fisica : public Pessoa {
private:
    string CPF;
public:
    Fisica(const string& nome, const string& CPF) : Pessoa(nome), CPF(CPF) {}

    string getCPF() const { return CPF; }
};

class Juridica : public Pessoa {
private:
    string CNPJ;
public:
    Juridica(const string& nome, const string& CNPJ) : Pessoa(nome), CNPJ(CNPJ) {}

    string getCNPJ() const { return CNPJ; }
};

class Historico {
private:
    vector<int> numero_conta;
    vector<int> operacao;
    vector<float> valor;
public:
    void operar(Conta& conta, int operacao, float valor) {
        numero_conta.push_back(conta.getConta());
        this->operacao.push_back(operacao);
        this->valor.push_back(valor);
        
        if (operacao == 1) { // Depósito
            conta.depositar(valor);
        } else if (operacao == 2) { // Saque
            conta.sacar(valor);
        } else {
            throw invalid_argument("Operação inválida.");
        }
    }

    const vector<int>& getNumeroConta() const { return numero_conta; }
    const vector<int>& getOperacao() const { return operacao; }
    const vector<float>& getValor() const { return valor; }
};

#endif // BANCO_HPP
