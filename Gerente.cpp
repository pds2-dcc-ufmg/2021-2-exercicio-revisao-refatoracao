#include <iostream>
#include <string>
#include "Gerente.hpp"

double ValorBONIFICACAO = 15.0;

void Gerente::setBonificacao(double bonificacao){
   this->bonificacao = bonificacao;
}

double Gerente::getBonificacao(){
   return this->bonificacao;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    return numTOTALVendas * ValorBONIFICACAO;
}

void Gerente::print() {

    std::cout << "[Funcionario]" << std::endl
              << "[Gerente]" << std::endl
              << "Nome: " << getNome() << std::endl
              << "Idade: " << getIdade() << std::endl
              << "RGFunc: " << getRgFunc() << std::endl
              << "SalarioBase: R$ " << std::setprecision(2) << std::fixed << getSalarioBase() << std::endl;
}
