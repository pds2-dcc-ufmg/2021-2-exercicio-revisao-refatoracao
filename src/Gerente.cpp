#include <iostream>

#include "Gerente.hpp"

void Gerente::print() {
	std::cout << "[Funcionario]" << std::endl
        << "[Gerente]" << std::endl
        << "  Nome: " << nome << std::endl
        << "  Idade: " << idade << std::endl
        << "  RGFunc: " << rgFuncionario << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;
}

double ValorBonificacao = 15.0;

double Gerente::calculaBonificacaoGerente(int numTotalVendas){	
        return numTotalVendas * ValorBonificacao;
}
