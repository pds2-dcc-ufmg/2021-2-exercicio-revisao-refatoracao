#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iomanip>
#include "Pessoa.hpp"

using namespace std;

class Funcionario : public Pessoa {
    public:
    
        Funcionario(double salarioBase, string idade, string nome, int RG);
        double get_salario() const;
        string get_idade() const;
        string get_nome() const;
        int get_RG() const;
        void print() const override;
    
    protected:
    
        double salarioBase;
        string idade;
        string nome;
        int RG;
};

#endif
