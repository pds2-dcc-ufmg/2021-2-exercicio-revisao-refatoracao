#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;

class Especialista : public Funcionario
{

public:
    string especialidade;

    double comissao(double valor_venda)
    {
        return valor_venda * perc;
    }

    void print()
    {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << endl
                  << "  salario_base: R$ " << fixed << setprecision(2) << salario_base << endl;
    }
};

#endif
