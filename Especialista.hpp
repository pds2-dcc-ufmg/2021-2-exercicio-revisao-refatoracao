#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

using namespace std;

double percentual = 0.1;

class Especialista : public Funcionario {

    public:
    
        double comissao(double ValorVenda);
        void print() const override;
        
    private:
        
        string especialidade;
};

#endif
