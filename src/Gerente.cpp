#include "Gerente.hpp"

Gerente::Gerente(std::string nome, int idade, int rgFunc, double salarioBase, double bonifPorVenda) {

  this->_nome = nome;
  this->_idade = idade;
  this-> _rgFunc = rgFunc;
  this->_salarioBase = salarioBase;
  this->_bonifPorVenda = bonifPorVenda;
}

void Gerente::imprime_dados() {
  std::cout << "[Funcionario]" << std::endl
        << "[Gerente]" << std::endl
        << "  Nome: " << _nome << std::endl
        << "  Idade: " << _idade << std::endl
        << "  RGFunc: " << _rgFunc << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _salarioBase << std::endl;
}

double Gerente::calcula_bonificacao(int numTotalVendas) {
  return numTotalVendas * this->_bonifPorVenda;
}