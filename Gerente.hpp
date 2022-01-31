#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

class Gerente : public Funcionario {
    public:
        Gerente(std::string nome, int idade, double salarioBase, int rgFunc) : 
        Funcionario(nome, idade, salarioBase, rgFunc, 15.0) {}

        void imprimirDados() override {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << "[Gerente]" << std::endl;
            Funcionario::imprimirDados();
        }
};

#endif