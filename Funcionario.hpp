#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iomanip>
#include "Pessoa.hpp"

using namespace std;

class Funcionario : public Pessoa {
    public:
    
        Funcionario(double salarioBase, string idade, string nome, int RG);
        void print() const override;
    
    protected:
    
        double salarioBase;
        string idade;
        string nome;
        int RG;
};

#endif
