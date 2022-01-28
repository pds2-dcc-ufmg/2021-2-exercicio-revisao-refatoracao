#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::print() {

    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << getNome() << endl
    << "  Idade: " << getIdade() << endl
    << "  RGFunc: " << getRG() << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() <<endl;

}

double calculaBonificacao(int numTOTALVendas){
    
    double x;
    return numTOTALVendas*ValorBONIFICACAO;

}