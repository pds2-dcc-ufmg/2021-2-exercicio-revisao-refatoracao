#include <iostream>
#include <string>
#include "Especialista.hpp"

using namespace std;

double perc = 0.1;

//Getter
string Especialista::get_especialidade()
{
  return especialidade;
}
//Setter
void Especialista::set_especialidade(string especialidade_inserida)
{
  especialidade = especialidade_inserida;
}

double Especialista::get_comissao(double ValorVenda) 
{
  return ValorVenda*perc;
}

void Especialista::print()
{
  cout << "[Especialista]" << endl;
  Funcionario::print();
  cout << "  Nome: " << get_nome() << endl
  << "  SalarioBase: R$ " << fixed << setprecision(2) << get_salario_base() <<endl;
}
