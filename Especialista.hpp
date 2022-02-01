#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double const perc = 0.1;

class Especialista : public Funcionario {

    private:
        string especialidade;
        unsigned int numAtendimentos=0;
        double valorComissao=0;

    public:
        Especialista(string argNome, string argIdade, int argRg, double argSalario, string argEspecialidade):
        Funcionario(argNome, argIdade, argRg, argSalario), especialidade(argEspecialidade) {}
        Especialista(){}

        string getEspecialidade();
        double getComissao();
        double comissao(double ValorVenda);
        unsigned int getAtendimentos();
        void addComissao(double argComissao);
        void addAtendimento();

        void print() override;
};

#endif
