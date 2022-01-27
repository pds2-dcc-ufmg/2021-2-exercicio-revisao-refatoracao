#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;

class Especialista : public Funcionario {
public:
    string especialidade;

    double comissao(double ValorVenda) {
        return ValorVenda * perc;
    }

    void print() override {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << endl
                  << "  salarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
    }
};

#endif