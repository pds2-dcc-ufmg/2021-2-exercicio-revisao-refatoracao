#include "Gerente.hpp"

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << this->getNome() << std::endl
    << "  Idade: " << this->getIdade() << std::endl
    << "  RGFunc: " << rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    return numTOTALVendas*ValorBONIFICACAO;
}

Gerente::Gerente(const std::string& Nome, int Idade, int rgFunc, double SalarioBase){
    this->Nome = Nome;
    this->Idade = Idade;
    this->rgFunc = rgFunc;
    this->SalarioBase = SalarioBase;
}