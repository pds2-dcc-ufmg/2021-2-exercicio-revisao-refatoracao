#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

double perc = 0.1;
double percWanda = 0.1;

class Especialista : public Funcionario {

    public:
        std::string especialidade;

    double comissao(double ValorVenda) {
        double c = ValorVenda*perc;
                  return c;
    }

    void print() {

        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << std::endl;
        std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;
    }
};
#endif
