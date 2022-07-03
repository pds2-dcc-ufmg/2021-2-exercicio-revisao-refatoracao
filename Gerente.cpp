#include "Gerente.hpp"

void Gerente::print() {
  cout << "[Funcionario]" << endl
       << "[Gerente]" << endl
       << "  Nome: " << nome << endl
       << "  Idade: " << idade << endl
       << "  RGFunc: " << rgFunc << endl
       << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase
       << endl;
}

double Gerente::calcula_bonificacao_gerente(int numTotalVendas) {
  return numTotalVendas * VALOR_BONIFICACAO;
}