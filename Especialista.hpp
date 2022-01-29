#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {
    public:
        double perc = 0.1;
        std::string especialidade;
        double comissao(double ValorVenda);
        void print() override;
};

#endif
