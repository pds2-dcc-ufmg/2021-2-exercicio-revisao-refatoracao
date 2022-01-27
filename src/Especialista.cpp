#include "Especialista.hpp"

void Especialista::imprime_dados() {
  std::cout << "[Especialista]" << std:: endl
        << "[Funcionario]" << std::endl
        << "  Idade: " << _idade << std::endl
        << "  RGFunc: " << _rgFunc << std::endl
        << "  Nome: " << _nome << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _salarioBase << std::endl;
}

double Especialista::comissao(double valorVenda) {
  return valorVenda * this->_perc;
}