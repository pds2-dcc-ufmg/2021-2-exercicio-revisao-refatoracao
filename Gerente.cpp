#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::print() {

    std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "Nome: " << nome << std::endl
            << "Idade: " << idade << std::endl
            << "RGFunc: " << rgFunc << std::endl
            << "SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    
    double x;
    return numTOTALVendas*ValorBONIFICACAO;
}