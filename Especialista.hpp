#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario {
    public:
        string especialidade;
        int numAtendimentos;
        double comissao;

        double calculaComissao(double valorVenda);
        virtual void print() override;
        Especialista(string nome, string idade, double salarioBase,  int rgFunc, string especialidade):
        Funcionario(nome, idade, salarioBase, rgFunc), especialidade(especialidade), numAtendimentos(0), comissao(0){};
};
#endif