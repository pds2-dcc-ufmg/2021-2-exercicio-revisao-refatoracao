#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {

    public:
        std::string especialidade;
        double comissao(double valorVenda);
        void print() override; 

    private:
        double percentualComissao = 0.1;
};

#endif