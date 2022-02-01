#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {

    public:

    public:
        string especialidade;

    Especialista(double salarioBase, string idade, string nome, int rg): Funcionario(salarioBase, idade, nome, rg){};
    double comissao(double ValorVenda) {
        double c = ValorVenda*perc;
                  return c;
    }


    void print() {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();



        std::cout << "  Nome: " << _nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << _salarioBase <<endl;

    }
};

#endif
