#include "Gerente.hpp"

void Gerente::print () {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  RGFunc: " << this->rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salarioBase << std::endl;
}

double Gerente::calculaBonificacaoGerente (int numTOTALVendas){

    this->bonificacao = numTOTALVendas * this->VALOR_BONIFICACAO;

    return this->bonificacao;
}

Gerente::Gerente (std::string nome, 
                  int idade, 
                  int rgFunc, 
                  int salarioBase) {

    this->nome = nome;
    this->idade = idade;
    this->rgFunc = rgFunc;
    this->salarioBase = salarioBase;
}

Gerente::~Gerente () {
    delete this;
}