#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::print(){
  cout << "[Funcionario]" << endl
       << "  Idade: " << _idade << endl
       << "  RGFunc: " << _rg_func << endl
       << "  Nome: " << _nome << endl
       << "  SalarioBase: R$ " << fixed << setprecision(2) << _salario_base <<endl;
}
