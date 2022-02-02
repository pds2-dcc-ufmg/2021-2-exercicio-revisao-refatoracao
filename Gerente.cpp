#include "Gerente.hpp"

Gerente::Gerente(double salarioBase, string idade, string nome, int RG, string bonificacao){
  this->salarioBase = salarioBase;
  this->idade = idade;
  this->nome = nome;
  this->RG = RG;
  this->bonificacao = bonificacao;
}

void Gerente::print() const{
  
  cout << "[Funcionario]" << endl 
   << "[Gerente]" << endl;
   print_dados();
}

double Gerente::calculoBonificacao(int numVendas){
  return numVendas * BONIFICACAO;
}
