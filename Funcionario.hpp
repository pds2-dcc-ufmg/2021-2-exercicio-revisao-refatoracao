#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>


class Funcionario {
    public:
        double SalarioBase; // valor minimo recebido pelo funcionario
        std::string IDADE;
        std::string nome;
        int rgFunc;

        void print() {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << this->IDADE << std::endl
            << "  RGFunc: " << this->rgFunc << std::endl;
        }

};

#endif
