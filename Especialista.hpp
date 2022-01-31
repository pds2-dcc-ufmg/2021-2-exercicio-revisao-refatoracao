#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

using namespace std;

double perc = 0.1;

class Especialista : public Funcionario {
    public:
        string especialidade;

        double comissao(double valorVenda);
        void print();
};
#endif