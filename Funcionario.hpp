#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {

    public:
        std::string nome;
        double salariobase; // valor mínimo recebido pelo funcionário
        std::string idade;
        int rgfunc;

        void print() {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << "  Idade: " << idade << std::endl;
            std::cout << "  RGFunc: " << rgfunc << std::endl;
        }
};

#endif
