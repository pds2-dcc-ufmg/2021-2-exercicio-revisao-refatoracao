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
  
  cout << "[Funcionario]" << endl 
   << "[Especialista]" << endl
   print_dados();
}
