#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {

    public:
        string especialidade;    

        Especialista(double SalarioBase = 0, string IDADE = " ",
                     string nome = " ", int rgFunc = 0, string especialidade = " ");

        double comissao(double ValorVenda);

        void print_esp();
};

#endif
