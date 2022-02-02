#include <iostream>
#include <string>
#include "Gerente.hpp"
using namespace std;

void Gerente::print() {
    cout << "[Gerente]" << endl;
    Funcionario::print();
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    return numTOTALVendas*ValorBONIFICACAO;
}
