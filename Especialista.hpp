#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Pessoa.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {

    public:

    string getEspecialidade();
    double comissao(double ValorVenda);
    void print() override;

    Especialista(string nome, string idade, int rgFunc, double salarioBase, string especialidade);

    private:

    string especialidade;

};

#endif
