#include "Especialista.hpp"

double Especialista::comissao(double ValorVenda) {
  return ValorVenda*perc; }

void Especialista::print() {
    std::cout << "[Especialista]" << std::endl;
    std::cout << "[Funcionario]" << std::endl
              << "  Idade: " << IDADE << std::endl
              << "  RGFunc: " << rgFunc << std::endl;
    std::cout << "  Nome: " << nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase <<std::endl; }