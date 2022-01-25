#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    public:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        std::string IDADE;
        std::string nome;
        int rgFunc;

        void print() {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << "  Idade: " << IDADE << std::endl;
            std::cout << "  RGFunc: " << rgFunc << std::endl;
        }
};
#endif
