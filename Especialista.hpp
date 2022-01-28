#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

double perc = 0.1;

class Especialista : public Funcionario{
    public:
        std::string especialidade;

    double comissao(double ValorVenda){
        return ValorVenda * perc;
    }

    void print(){
        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << std::endl << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;
    }
};

#endif
