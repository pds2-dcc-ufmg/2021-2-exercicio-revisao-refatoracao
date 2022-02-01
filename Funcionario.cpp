#include "Funcionario.hpp"

Funcionario::Funcionario(double salarioBase, string idade, string nome, int RG){
    
  this->salarioBase = salarioBase;
  this->idade = idade;
  this->nome = nome;
  this->RG = RG;
}

void Funcionario::print() const{
  cout << "[Funcionario]" << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << RG << endl;
    
}
