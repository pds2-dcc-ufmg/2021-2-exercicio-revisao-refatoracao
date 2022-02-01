#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;


class Especialista : public Funcionario {

    public:
        int numAtendimentos;
        double comissaoValor;
        string especialidade;

    public:
        Especialista (string nome,
                      int idade,
                      int registro,
                      double SalarioBase,
                      string );
        Especialista();
        double comissao(double ValorVenda);
        void print();
        void contagemAtendimento();
};

#endif
