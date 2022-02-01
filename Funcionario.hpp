#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    private:
        double SalarioBase;
        std::string IDADE;
        std::string nome;
        int rgFunc;
    
    public:
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
