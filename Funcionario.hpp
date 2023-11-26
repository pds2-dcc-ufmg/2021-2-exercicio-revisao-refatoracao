#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
protected:
    double salarioBase; // valor m�nimo recebido pelo funcion�rio
    std::string idade;
    std::string nome;
    int rgFunc;
public:
    virtual void print() {
        std::cout << "[Funcionario]" << std::endl;
        std::cout << "  Idade: " << idade << std::endl;
        std::cout << "  RGFunc: " << rgFunc << std::endl;
    }
    std::string getNome(){
        return nome;
    }
    double getSalarioBase(){
        return salarioBase;
    }
};

#endif
