#include "Gerente.hpp"

void Gerente::print () {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  RGFunc: " << this->rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salarioBase << std::endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE (int numTOTALVendas){

    return numTOTALVendas * this->VALOR_BONIFICACAO;
}