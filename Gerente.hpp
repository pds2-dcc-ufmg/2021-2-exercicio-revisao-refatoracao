#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

class Gerente : public Funcionario {
    public:
        Gerente(std::string nome, int idade, double salarioBase, int rgFunc) : 
        Funcionario(nome, idade, salarioBase, rgFunc) {
            valorBonificacao = 15.0;
        }

        void imprimirDados() override {
            std::cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            Funcionario::imprimirDados();
        }
};

#endif