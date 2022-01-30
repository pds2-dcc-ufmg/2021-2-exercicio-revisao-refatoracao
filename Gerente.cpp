#include <iostream>
#include <string>
#include "Gerente.hpp"


Gerente::Gerente(string nome, string idade, int rgFunc, double SalarioBase, double bonificacao){
    this->NOME = nome;
    this->idade = idade;
    this->rgFunc = rgFunc;
    this->SalarioBase = SalarioBase;
    this->bonificacao = bonificacao;
}


void Gerente::print_gerente() {
    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << NOME << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    double x;
    return numTOTALVendas*ValorBONIFICACAO;
}