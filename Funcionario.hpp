#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iomanip>
#include <iostream>

class Funcionario {
   public:
    double _SalarioBase;  // valor minimo recebido pelo funcionario
    std::string _IDADE;
    std::string _nome;
    int _rgFunc;

    void print() {
        std::cout << "[Funcionario]" << std::endl
                  << "  Idade: " << _IDADE << std::endl
                  << "  RGFunc: " << _rgFunc << std::endl;
    }

    void print_tchau() {
        std::cout << "Tchau" << std::endl;
    }
};

#endif
