#include "Gerente.hpp"
void Gerente::print(){
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    double x;
    return numTOTALVendas*ValorBONIFICACAO;       
}


double Gerente::getBonificacao(){
    return this->bonificacao;
}

void Gerente::setBonificacao(double _bonificacao){
    this->bonificacao = _bonificacao;
}


