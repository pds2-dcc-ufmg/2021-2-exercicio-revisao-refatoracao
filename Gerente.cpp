#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::print() {
    cout << "[Gerente]" << endl;
    Funcionario::print();
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    return numTOTALVendas*ValorBONIFICACAO;
}
