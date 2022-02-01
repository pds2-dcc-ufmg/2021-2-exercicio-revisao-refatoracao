#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

double perc = 0.1;

class Especialista : public Funcionario {

    public:
        string especialidade;

    double comissao(double ValorVenda) {
        double c = ValorVenda*perc;
                  return c;
    }
    
    void print() {

        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << std::endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;

    }
};

#endif
