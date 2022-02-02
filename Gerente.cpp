#include "Funcionario.hpp"
#include "Gerente.hpp"
#include <iostream>
#include <iomanip>

Gerente::Gerente(){
    valorBonificacao = 15.0;
}

void Gerente::setBonificacao(double bonificacao){
    this-> bonificacao = bonificacao;
}

double Gerente::getBonificacao(){
    return this-> bonificacao;
}

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl<< "[Gerente]" << std::endl
    << "  Nome: " << nome << std::endl << "  Idade: " << idade << std::endl
    << "  RGFunc: " << rgFuncionario << std::endl << "  SalarioBase: R$ " 
    << std::fixed << std::setprecision(2) << salarioBase << std::endl;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas){

    return numTotalVendas*valorBonificacao;
}