#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::setBonificacao(double bonificacao){
   this->bonificacao = bonificacao;
}

void Gerente::setValorBONIFICACAO(double ValorBONIFICACAO){
   this->ValorBONIFICACAO = ValorBONIFICACAO;
}

double Gerente::getBonificacao(){
   return bonificacao;
}

double Gerente::getValorBONIFICACAO(){
   return ValorBONIFICACAO;
}

void Gerente::print() {

    std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "Nome: " << getNome() << std::endl
            << "Idade: " << getIdade() << std::endl
            << "RGFunc: " << getRgFunc() << std::endl
            << "SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() << std::endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    
    double x;
    return numTOTALVendas*(getValorBONIFICACAO());
}