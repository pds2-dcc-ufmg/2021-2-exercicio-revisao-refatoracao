#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario
{

private:
    string especialidade;
    int numAtendimentos;
    double comissao;

public:
    Especialista(double salarioBase, int idade, string nome, int rgFunc, string especialidade);
    Especialista();
    void setComissao(double valorVenda);
    void setNumeroAtendimentos();
    double getSalarioTotal();
    int getNumeroAntendimento();
    void print();
};

#endif
