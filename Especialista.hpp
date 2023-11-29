#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario
{

private:
    std::string _especialidade;
    double percentual = 0.1;

public:
    double comissao(double ValorVenda);
    void print();
    void set_especialidade(std::string especialidade);
    std::string get_especialidade();
};

#endif
