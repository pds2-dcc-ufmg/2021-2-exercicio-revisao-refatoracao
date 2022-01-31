#include "Gerente.hpp"
#include <iostream>
#include <string>

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << get_Nome() << std::endl
    << "  Idade: " << get_Idade() << std::endl
    << "  RGFunc: " << get_Rg() << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << get_Salario() << std::endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    double x;
    return numTOTALVendas*ValorBONIFICACAO;
}