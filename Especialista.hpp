#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {
public:
    std::string especialidade;

    virtual double comissao(double ValorVenda); // tornando a função virtual para suportar polimorfismo
    virtual void print() override; // sobrescrevendo a função print da classe base
    virtual double getSalarioTotal() override; // sobrescrevendo a função getSalarioTotal da classe base
    int getNumAtendimentos(); // adicionando um método para obter o número de atendimentos
};


#endif
