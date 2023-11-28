#include "Gerente.hpp"

Gerente::Gerente(std::string& nome, int idade, int rgFuncionario, double salarioBase) :
_nome(nome), _idade(idade), _rgFuncionario(rgFuncionario), _salarioBase(salarioBase);

double bonificacao = 1;

Gerente::calcularBonificacaoGerente(int numTotalVendas) {
  double valorBonificacao = 15.0;
  bonificacao = numTotalVendas * valorBonificacao;
  return bonificacao;
}
 
double salario = _salarioBase + bonificacao;

Gerente::imprimeDadosGerente() {
  std::cout << "[Gerente]" << std::endl;
  std::cout << "Nome: " << _nome << std::endl;
  std::cout << "Idade: " << _idade << std::endl;
  std::cout << "RG: " << _rgFuncionario << std::endl;
  std::cout << "Salário: R$ " << fixed << setprecision(2) << salario << std::endl;
}
