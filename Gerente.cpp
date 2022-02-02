#include "Gerente.hpp"

const double ValorBONIFICACAO = 15.0;

Gerente::Gerente(string nome, string IDADE,  int rgFunc, double SalarioBase, double bonificacao) {
    this->nome = nome;
    this->IDADE = IDADE;
    this->rgFunc = rgFunc;
    this->SalarioBase = SalarioBase;
    this->bonificacao = bonificacao;
}

void Gerente::print() { 
    cout << "[Gerente]" << endl;
    Funcionario::print();
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    return numTOTALVendas*ValorBONIFICACAO;
}
