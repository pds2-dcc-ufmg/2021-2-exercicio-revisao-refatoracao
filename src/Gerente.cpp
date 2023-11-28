#include <iostream>

#include "Gerente.hpp"

void Gerente::print() {
	std::cout << "[Funcionario]" << std::endl
        << "[Gerente]" << std::endl
        << "  Nome: " << nome << std::endl
        << "  Idade: " << IDADE << std::endl
        << "  RGFunc: " << rgFunc << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
}

double ValorBONIFICACAO = 15.0;

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
	double x;
        return numTOTALVendas * ValorBONIFICACAO;
}
