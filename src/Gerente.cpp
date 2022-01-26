#include "Gerente.hpp"

void Gerente::setBonificacao(double bonificacao) {
    this->bonificacao = bonificacao;
}

double Gerente::getBonificacao() {
    return bonificacao;
}

void Gerente::print() {
    cout << "[Funcionario]" << endl
         << "[Gerente]" << endl
         << "  Nome: " << getNome() << endl
         << "  Idade: " << getIdade() << endl
         << "  RGFunc: " << getRgFunc() << endl
         << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() << endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas) {
    return numTOTALVendas * ValorBONIFICACAO;
}