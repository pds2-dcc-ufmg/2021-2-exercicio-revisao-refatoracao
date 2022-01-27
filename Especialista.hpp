#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

const double perc = 0.1;

class Especialista : public Funcionario {

    public:
        string especialidade;

    double comissao(double ValorVenda) {
        double c = ValorVenda*perc;
        return c;
    }

    void print() {
        cout << "[Especialista]" << endl;
        Funcionario::print();

        cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
    }
};

#endif
