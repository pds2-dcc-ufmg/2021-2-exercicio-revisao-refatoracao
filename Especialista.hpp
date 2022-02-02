#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

double bonus = 0.1;

class Especialista : public Funcionario {

    private:
    
        string Especialidade;

    double comissao(double ValorVenda) {
        double _comissao = ValorVenda * bonus;
                  return _comissao;
    }

    void print() {

        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;

    }
};

#endif
