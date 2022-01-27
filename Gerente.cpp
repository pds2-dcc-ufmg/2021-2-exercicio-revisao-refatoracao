#include <iostream>
#include <iomanip>
#include <string>
#include "Gerente.hpp"


double Gerente::getBonificacao() const{
    return bonificacao;
}

void Gerente::setBonificacao(double bonificacao) {
    this->bonificacao = bonificacao;
}

void Gerente::print() {
	std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << getNome() << std::endl
    << "  Idade: " << getIdade() << std::endl
    << "  RGFunc: " << getRgFunc() << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << getSalarioBase() << std::endl;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas) {
    return numTotalVendas*this->bonificacao;
}