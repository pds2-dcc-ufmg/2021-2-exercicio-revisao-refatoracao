#include <iostream>
#include <iomanip>

#include "Gerente.hpp"


Gerente::Gerente(std::string nome, std::string idade, int rgFunc, double salarioBase) {
    this->nome = nome;
    this->idade = idade;
    this->rgFunc = rgFunc;
    this->salarioBase = salarioBase;
}

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  RGFunc: " << this->rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) 
    << this->salarioBase << std::endl;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas) {
    return numTotalVendas*getValorBonificacao();
}