#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double percentualDeComissao = 0.1;
class Especialista : public Funcionario {

public:
    string especialidade;
    double comissao(double ValorVenda) {
        double valorDeComissao = ValorVenda * percentualDeComissao;
        return valorDeComissao;
    }

void print() {
    std::cout << "[Especialista]" << endl;
    Funcionario::print();
    std::cout << "  Nome: " << nome << endl;
    std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
    }
};

#endif
