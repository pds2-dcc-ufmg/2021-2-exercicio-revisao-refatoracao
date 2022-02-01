#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Funcionario {
    public:
        double SalarioBase;
        std::string IDADE;
        std::string nome;
        int rgFunc;

        void print() {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc: " << rgFunc << std::endl;
        }

};

#endif
