#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario
{

public:
    Especialista(std::string nome, std::string rgFuncionario, int idade, double salarioBase, std::string especialidade);
    void realizaAtendimento(double valorVenda);
    void print() override;
    std::string getNome();
    int getNumAtendimentos();

private:
    std::string especialidade;
    double TAXA_COMISSAO = 0.1;
    int numAtendimentos = 0;
};

#endif
