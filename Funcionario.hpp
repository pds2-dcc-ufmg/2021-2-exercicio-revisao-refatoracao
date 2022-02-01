#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    private:
        double SalarioBase; // valor mínimo recebido pelo funcionário
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
            cout << "Tchau" << endl;
        }
};

#endif
