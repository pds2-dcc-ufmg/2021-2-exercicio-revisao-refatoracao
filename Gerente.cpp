#include "Gerente.hpp"

double valorBonificacao = 15.0;

void Gerente::print() const {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  Idade: " << this->idade << std::endl
    << "  RGFunc: " << this->rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salarioBase <<std::endl;
}

double Gerente::calcula_bonificacao_gerente(int numTotalVendas){
    double bonificacaoDoGerente = numTotalVendas * valorBonificacao;
    return bonificacaoDoGerente;
}