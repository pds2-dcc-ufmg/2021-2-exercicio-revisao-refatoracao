#include "Especialista.hpp"

const double PERC = 0.1;
const double PERC_WANDA = 0.1;

double Especialista::comissao(double ValorVenda) {
  double c = ValorVenda*PERC;

  return c;
}

void Especialista::print() {
  std::cout << "[Especialista]" << endl;
  Funcionario::print();

  std::cout << "  Nome: " << nome << endl
  << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}

void Especialista::setEspecialidade(string especialidade) {
  this->especialidade = especialidade;
}

string Especialista::getEspecialidade() {
  return this->especialidade;
}