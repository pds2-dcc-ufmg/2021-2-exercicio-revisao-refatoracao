#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
    public:
        string especialidade;

        double comissao(double ValorVenda);
        
        void print();

    private:
        double perc = 0.1;
        double percWanda = 0.1;
};

#endif
