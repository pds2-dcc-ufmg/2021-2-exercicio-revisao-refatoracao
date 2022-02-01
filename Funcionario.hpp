#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iomanip>
#include "Pessoa.hpp"

using namespace std;

class Funcionario : public Pessoa {
    public:
    
        Funcionario(double salarioBase, string idade, string nome, int RG);
        void print() const override;
        double get_salario() const;
        string get_idade() const;
        string get_nome() const;
        int get_RG() const;
    
    private:
    
        double salarioBase;
        string idade;
        string nome;
        int RG;
};

#endif
