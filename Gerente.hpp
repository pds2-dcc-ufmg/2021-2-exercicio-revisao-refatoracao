#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

double ValorBONIFICACAO = 15.0;

class Gerente
{
public:
    double SalarioBase; // valor m�nimo recebido pelo funcion�rio
    std::string IDADE;
    std::string nome;
    int rgFunc;
    double bonificacao;

    void print()
    {
        std::cout << "[Funcionario]" << std::endl
             << "[Gerente]" << std::endl
             << "  Nome: " << nome << std::endl
             << "  Idade: " << IDADE << std::endl
             << "  RGFunc: " << rgFunc << std::endl
             << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
    }

    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas)
    {
        double x;
        return numTOTALVendas * ValorBONIFICACAO;
    }
};

#endif