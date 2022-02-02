#include <iostream>
#include <string>
#include "Gerente.hpp"

Gerente::Gerente()
{
}

void Gerente::print()
{
    std::cout << "[Gerente]" << std::endl;
    Funcionario::print();
}

double Gerente::calculaBonificacao(int numTOTALVendas)
{
    double ValorBONIFICACAO = 15.0;
    return numTOTALVendas * ValorBONIFICACAO;
}