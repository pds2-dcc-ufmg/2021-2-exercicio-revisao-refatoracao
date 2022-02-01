#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario
{

public:
    Especialista();

    Especialista(std::string nome, int idade, int rg, double salarioBase, std::string especialidade);

    double calculaComissao(double valorVenda);

    void print();

private:
    std::string especialidade;
};

#endif
