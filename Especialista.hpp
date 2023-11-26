#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double PERC = 0.1;

class Especialista : public Funcionario
{

public:
    Especialista(string _nome, string _idade, int _rgFunc, double _salarioBase)
        : Funcionario(_nome, _idade, _rgFunc, _salarioBase) {} 

    double comissao(double ValorVenda)
    {
        double c = ValorVenda * PERC;
        return c;
    }

    void print()
    {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << endl
                  << "  salarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
    }
};

#endif
