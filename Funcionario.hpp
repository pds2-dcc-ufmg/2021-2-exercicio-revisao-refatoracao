#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iomanip>
#include "Pessoa.hpp"

using namespace std;

class Funcionario : public Pessoa {
    public:
    
        Funcionario(double SalarioBase, string idade, string nome, int RG);
        void print() const override;
    
    private:
    
        double SalarioBase;
        string idade;
        string nome;
        int RG;
};

#endif
