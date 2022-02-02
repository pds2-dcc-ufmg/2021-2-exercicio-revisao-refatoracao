#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario
{
public:
    std::string especialidade;
    int numAtendimentos;
    double comissao;

    Especialista(std::string nome, int idade, std::string rgFunc, double salarioBase, std::string especialidade1);

    double calcularComissao(double ValorVenda);
    void print() override;
};

#endif
