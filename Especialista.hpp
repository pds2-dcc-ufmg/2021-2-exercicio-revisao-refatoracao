#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {

    private:
        string especialidade;

    public:
        double comissao(double ValorVenda);

        void print();

        Especialista(_especialidade,_idade, _nome, _rgFunc, _SalarioBase): especialidade(_especialidade), Funcionario(_idade, _nome, _rgFunc, _SalarioBase);
};

#endif
