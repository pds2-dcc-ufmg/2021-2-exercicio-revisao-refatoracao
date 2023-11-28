#include "Especialista.hpp"

Especialista::Especialista(std::string& nome, int idade, int rgFuncionario, double salarioBase, std::string especialidade) :
_nome(nome), _idade(idade), _rgFuncionario(rgFuncionario), _salarioBase(salarioBase), _especialidade(especialidade);

double comissao = 1;

Especialista::calcularComissao(double valorVenda) {
  double percentual = 0.1;
  comissao = valorVenda * percentual;
  return comissao;
}

double salario = _salarioBase + comissao;

Especialista::imprimeDadosEspecialista() {
  std::cout << "[Especialista]" << std::endl;
  std::cout << "Nome: " << _nome << std::endl;
  std::cout << "Especialidade: " << _especialidade << std::endl;
  std::cout << "Idade: " << _idade << std::endl;
  std::cout << "RG: " << _rgFuncionario << std::endl;
  std::cout << "Salário: R$ " << fixed << setprecision(2) << salario << std::endl;
}
