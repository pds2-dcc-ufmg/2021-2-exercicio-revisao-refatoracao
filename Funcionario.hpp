#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Resgistro {
    
    public:

        std::string idade;
        int rgFuncionario;        
        double salarioBase;
        std::string nome;
};

class Funcionario : public Resgistro {

    public:

        void print();
        void print_oi();
};
#endif