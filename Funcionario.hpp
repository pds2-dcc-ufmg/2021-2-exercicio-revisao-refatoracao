#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {

    public:
        double SalarioBase; // valor minimo recebido pelo funcionario
        std::string Idade;
        std::string Nome;
        int rgFunc;

        void print() {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << Idade << std::endl
            << "  RGFunc: " << rgFunc << std::endl;
        }
};

#endif
