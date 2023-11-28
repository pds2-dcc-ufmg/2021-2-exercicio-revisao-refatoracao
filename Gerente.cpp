#include "Gerente.hpp"

double ValorBONIFICACAO = 15.0;

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl
              << "[Gerente]" << std::endl
              << "  Nome: " << nome << std::endl
              << "  Idade: " << idade << std::endl
              << "  RGFunc: " << rgFunc << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;
}

double Gerente::calculaBonificacao(int numTOTALVendas) {
    return numTOTALVendas * ValorBONIFICACAO;
}

double Gerente::getSalarioTotal() {
    return salarioBase + bonificacao;
}

void Gerente::setBonificacao(double bonificacao) {
    this->bonificacao = bonificacao;
}
