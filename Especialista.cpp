#include "Especialista.hpp"

Especialista::Especialista(double salarioBase, string idade, string nome, int RG, string especialidade){
  this->salarioBase = salarioBase;
  this->idade = idade;
  this->nome = nome;
  this->RG = RG;
  this->especialidade = especialidade;
}

double Especialista::comissao(double ValorVenda){
  return PERCENTUAL * ValorVenda;
}

void Funcionario::print() const{
  
  cout << "[Especialista]" << endl
   << "[Funcionario]" << endl
   << "  Idade: " << idade << endl
   << "  RGFunc: " << RG << endl
   << "  Nome: " << nome << endl
   << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << endl;
}
