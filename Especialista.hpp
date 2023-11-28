#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario {
public:
    string especialidade;
    double porcentagem;
    double comissao(double ValorVenda) {
        double c = ValorVenda*porcentagem;
        return c;
    }
    void print() {
        cout << "[Especialista]" << endl;
        Funcionario::print();
        cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
    }
};

#endif
