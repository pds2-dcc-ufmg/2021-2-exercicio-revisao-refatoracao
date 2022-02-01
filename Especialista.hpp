#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"


double percWanda = 0.1;

class Especialista : public Funcionario {

    public:

    public:
    std::string especialidade;

    double comissao(double ValorVenda);
        
    void print();
}     
 #endif
