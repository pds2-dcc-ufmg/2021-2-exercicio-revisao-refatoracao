#include <iostream>
#include <iomanip>
#include "Gerente.hpp"

Gerente::Gerente(std::string nome, std::string IDADE, int rgFunc, double SalarioBase):
Funcionario(nome, IDADE, rgFunc, SalarioBase) {}

void Gerente::print() const {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << IDADE << std::endl
    << "  RGFunc: " << rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase <<std::endl;
}

void Gerente::calcula_BONIFICACAO_GERENTE(const int &numTOTALVendas){
    bonificacao = numTOTALVendas*ValorBONIFICACAO;
}

double Gerente::calcula_SALARIO_TOTAL() const {
    return SalarioBase + bonificacao;   
}