#include <iostream>
#include <string>
#include "Venda.hpp"
#include "Gerente.hpp"

using namespace std;

double ValorBONIFICACAO = 15.0;

void Gerente::print(){
    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    return numTOTALVendas*ValorBONIFICACAO;
}