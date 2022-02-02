#include <iostream>
#include <string>
#include "Gerente.hpp"

using namespace std;

double bonificacao_por_venda = 15.0;

//Setter
void Gerente::set_bonificacao(double bonificacao_inserida)
{
  bonificacao = bonificacao_inserida;
}

//Getter
double Gerente::get_bonificacao()
{
  return bonificacao;
}

double Gerente::calcula_bonificacao_gerente(int num_vendas)
{
  return num_vendas*bonificacao_por_venda;
}

void Gerente::print() 
{
  cout << "[Funcionario]" << endl
  << "[Gerente]" << endl
  << "  Nome: " << get_nome() << endl
  << "  Idade: " << get_idade() << endl
  << "  RGFunc: " << get_rg() << endl
  << "  SalarioBase: R$ " << fixed << setprecision(2) << get_salario_base() <<endl;
}