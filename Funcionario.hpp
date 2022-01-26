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
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc: " << rgFunc << std::endl;
        }

        void print_oi(){
            std::cout << "Tchau" << std::endl; 
        }
};

#endif