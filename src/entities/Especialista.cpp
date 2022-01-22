#include "Especialista.hpp"

const double PERC = 0.1;
const double PERC_WANDA = 0.1;

double Especialista::comissao(double valorVenda) {
  return valorVenda*PERC;
}

void Especialista::print() {
  std::cout << "[Especialista]" << endl;
  Funcionario::print();

  std::cout << "  Nome: " << this->nome << endl
  << "  SalarioBase: R$ " << fixed << setprecision(2) << this->salarioBase <<endl;
}

void Especialista::setEspecialidade(string especialidade) {
  this->especialidade = especialidade;
}

string Especialista::getEspecialidade() {
  return this->especialidade;
}