#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
    public:
        double SalarioBase; 
        std::string idade;
        std::string nome;
        int rg;

        void imprimeDadosFuncionario() {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << idade << std::endl
            << "  RGFunc: " << rg << std::endl;
        }

};

#endif
