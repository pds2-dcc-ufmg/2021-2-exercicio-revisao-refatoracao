#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::setBonificacao(double argBonificacao){
    bonificacao = argBonificacao;
}

double Gerente::getBonificacao(){
    return bonificacao;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    return numTOTALVendas*BONIFICACAO;
}

void Gerente::print(){
    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
}