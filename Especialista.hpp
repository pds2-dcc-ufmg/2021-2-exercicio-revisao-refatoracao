#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double Perc = 0.1;
double PercWanda = 0.1;


class Especialista : public Funcionario {

    public:
        string Especialidade;

    double Comissao(double ValorVenda)
    {
        double c = ValorVenda*perc;
                  return c;
    }

    void print(){

        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
    }
};

#endif
