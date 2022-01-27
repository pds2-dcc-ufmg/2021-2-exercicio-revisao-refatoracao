#include "Gerente.hpp"

void Gerente::imprime_dados() {
  std::cout << "[Funcionario]" << std::endl
        << "[Gerente]" << std::endl
        << "  Nome: " << _nome << std::endl
        << "  Idade: " << _idade << std::endl
        << "  RGFunc: " << _rgFunc << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _salarioBase << std::endl;
}

double Gerente::calcula_bonificacao(int numTotalVendas) {
  return numTotalVendas * _valorBonificacao;
}