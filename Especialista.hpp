#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;


class Especialista : public Funcionario {

    public:

    public:
        string especialidade;

    double comissao(double ValorVenda) {
        double c = ValorVenda*perc;
                  return c;
    }


    void print() {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();



        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;

    }
};

#endif
