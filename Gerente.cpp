#include "Gerente.hpp"
#include <iostream>
#include <iomanip>

const double ValorBONIFICACAO = 15.0;

void Gerente::print() const {

    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  RGFunc: " << rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;

}

void Gerente::CalculaBonificacao(int numTOTALVendas){
    bonificacao = numTOTALVendas*ValorBONIFICACAO;
}