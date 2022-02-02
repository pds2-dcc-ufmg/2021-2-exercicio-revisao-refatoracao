#include "Funcionario.hpp"

Funcionario::Funcionario(double salarioBase, string idade, string nome, int RG){
  this->salarioBase = salarioBase;
  this->idade = idade;
  this->nome = nome;
  this->RG = RG;
}

double Funcionario::get_salario() const{
  return this->salarioBase;
}

string Funcionario::get_idade() const{
  return this->idade;
}

string Funcionario::get_nome() const{
  return this->nome;
}

int Funcionario::get_RG() const{
  return this->RG;
}

void Funcionario::print() const{
  cout << "[Funcionario]" << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << RG << endl; 
}
