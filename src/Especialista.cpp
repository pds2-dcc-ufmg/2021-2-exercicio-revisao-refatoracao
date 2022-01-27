#include "Especialista.hpp"

Especialista::Especialista(std::string nome,
                           int idade, int rgFunc, double salarioBase,
                           std:: string especialidade,
                           double perc) {

  this->_nome = nome;
  this->_idade = idade;
  this-> _rgFunc = rgFunc;
  this->_salarioBase = salarioBase;
  this->_especialidade = especialidade;
  this->_perc = perc;
}

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