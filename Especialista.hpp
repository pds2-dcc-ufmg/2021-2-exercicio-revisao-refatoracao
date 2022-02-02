#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {
    public:
        Especialista(std::string nome, std::string idade, int rg_func, double salario_base, std::string especialidade);
        Especialista();
        std::string especialidade;
        double percentual = 0.1;
    
    double comissao(double valor_venda);
    void print();
};

#endif