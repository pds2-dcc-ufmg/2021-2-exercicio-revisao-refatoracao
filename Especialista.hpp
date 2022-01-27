#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {

    public:

        string especialidade;
        double perc = 0.1;

        double comissao(double valorVenda);
        void print();
        
};

#endif
