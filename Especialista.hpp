#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double PERCENTUAL_COMISSAO = 0.1;

class Especialista : public Funcionario {
    public:
        string especialidade;

    double comissao(double valorVenda) {
        return valorVenda * PERCENTUAL_COMISSAO;
    }

    void print() {
        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;

    }
};

#endif
