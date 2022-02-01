#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
    public:
        string especialidade;
        int numAtendimentos;
        int comissao_;

        Especialista(string n, string idade, int rg, double s, string e)
            : Funcionario(n, idade, rg, s), especialidade(e), numAtendimentos(0), comissao(0) {};

        double comissao(double ValorVenda);
        
        void print();

    private:
        double const perc = 0.1;
        double const percWanda = 0.1;
};

#endif
