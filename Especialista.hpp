#ifndef Especialista_HPP
#define Especialista_HPP
#define PERCENTUAL 0.1

#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario {

    public:
    
        Especialista(double salarioBase, string idade, string nome, int RG, string especialidade);
        double comissao(double ValorVenda);
        void print() const override;
        
    private:
        
        string especialidade;
};

#endif
