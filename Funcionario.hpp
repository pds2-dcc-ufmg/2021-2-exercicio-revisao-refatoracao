#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    private:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        string Idade;
        string Nome;
        int RgFunc;

        void print() {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << " Nome: " << Nome << std::endl;
            std::cout << "  Idade: " << Idade << std::endl;
            std::cout << "  RGFunc: " << RgFunc << std::endl;
        }

        void print_oi(){
            std::cout << "Oi" << std::endl;
        }
};

#endif
