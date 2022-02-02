#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include "Pessoa.hpp"
#include <iostream>
#include <string>


class Funcionario : public Pessoa {
    protected:
        double salarioBase; 
        std::string rgFunc;

    public:
        Funcionario(std::string nome, 
                    int idade,
                    double salarioBase,
                    std::string rgFunc) : Pessoa(nome, idade) {
                        this->salarioBase = salarioBase;
                        this->idade = idade;
                    }
};

#endif
