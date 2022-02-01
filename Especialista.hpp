#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
    public:
        string especialidade;

        Especialista(double s, string idade, string n, int rg, string e)
            : Funcionario(s, idade, n, rg), especialidade(e){};

        double comissao(double ValorVenda);
        
        void print();

    private:
        double const perc = 0.1;
        double const percWanda = 0.1;
};

#endif
