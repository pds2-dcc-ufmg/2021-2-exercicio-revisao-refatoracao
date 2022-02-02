#include <iostream>
#include <string>
#include "Gerente.hpp"
using namespace std;

double Gerente::Gerente(){
    this->bonificacao = 15.0;
}

double Gerente::getBonificacao(){
    return this->bonificacao;
}
void Gerente::setBonificacao(double bonificacaoNovo){
    this->bonificacao = bonificacaoNovo;
}
void Gerente::print() {
    cout << "[Gerente]" << endl;
    Funcionario::print();
}

double Gerente::calculaBonificacao(int numTotalVendas){
    return numTotalVendas*this->valorBonificacao;
}
