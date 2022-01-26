#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario
{
protected:
    double salarioMinimo;
    std::string idade;
    std::string nome;
    int rgFunc;

    static double perc;
    static double percWanda;

public:
    void imprimirDados()
    {
        std::cout << "[Funcionario]" << std::endl
                  << "  Idade: " << idade << std::endl
                  << "  RGFunc: " << rgFunc << std::endl;
    }
    double getSalarioMinimo() { return salarioMinimo; }
};

#endif