#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include<string>

class Funcionario { //Classe abstrata de funcionarios (Especialistas + Gerentes)
    public:

        virtual void print() const = 0;
    
    protected:
        std::string _nome;
        std::string _idade;
        int _rgFunc;
        int _salarioBase;
        friend class Venda;
        
};

#endif