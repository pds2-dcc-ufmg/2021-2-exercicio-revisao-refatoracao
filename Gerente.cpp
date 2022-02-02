#include <iostream>
#include <string>
#include "Gerente.hpp"

void Gerente::print(){
  cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << _nome << endl
            << "  Idade: " << _idade << endl
            << "  RGFunc: " << _rg_func << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << _salario_base <<endl; 
}

double Gerente::calcular_bonificacao_gerente(int num_total_vendas){
  return num_total_vendas*_valor_da_bonificacao;
}
