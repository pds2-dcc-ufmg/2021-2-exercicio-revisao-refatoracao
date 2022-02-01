#include "Gerente.hpp"

double ValorBONIFICACAO = 15.0;

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  Idade: " << this->IDADE << std::endl
    << "  RGFunc: " << this->rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->SalarioBase <<std::endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    double x;
    return numTOTALVendas*ValorBONIFICACAO;
}

double Gerente::getBonificacao(){
    return this-> bonificacao;
}

void Gerente::setBonificacao(double Bonificacao){
    this->bonificacao = Bonificacao;
}