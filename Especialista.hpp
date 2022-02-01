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
        string _especialidade;
        int _numAtendimentos;
        double _comissao;

    Especialista(double salarioBase, string idade, string nome, int rg, string especialidade, int numAtendimentos, double comissao):
                Funcionario(salarioBase, idade, nome, rg),
                _especialidade(especialidade), _numAtendimentos(numAtendimentos), _comissao(comissao){};
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
