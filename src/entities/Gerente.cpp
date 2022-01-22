#include "Gerente.hpp"

const double VALOR_BONIFICACAO = 15.0;

void Gerente::print() {
  std::cout << "[Funcionario]" << std::endl
  << "[Gerente]" << std::endl
  << "  Nome: " << this->nome << std::endl
  << "  Idade: " << this->idade << std::endl
  << "  RGFunc: " << this->rgFunc << std::endl
  << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salarioBase << std::endl;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas){
  return numTotalVendas*VALOR_BONIFICACAO;
}