#include "Gerente.hpp"

void Gerente::print() {
    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << _nome << endl
    << "  Idade: " << _idade << endl
    << "  RGFunc: " << _rg << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << _salarioBase <<endl;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas){
    return numTotalVendas*ValorBONIFICACAO;
}