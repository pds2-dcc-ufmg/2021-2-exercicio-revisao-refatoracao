#include <iostream>
#include <string>
#include "Funcionario.hpp"

using namespace std;

//Getters
double Funcionario::get_salario_base()
{
  return salario_base;
}
string Funcionario::get_idade()
{
  return idade;
}
string Funcionario::get_nome()
{
  return nome;
}
int Funcionario::get_rg()
{
  return rg;
}

//Setters
void Funcionario::set_salario_base(double sb_inserido)
{
  salario_base = sb_inserido;
}
void Funcionario::set_idade(string idade_inserida)
{
  idade = idade_inserida;
}
void Funcionario::set_nome(string nome_inserido)
{
  nome = nome_inserido;
}
void Funcionario::set_rg(int rg_inserido)
{
  rg = rg_inserido;
}

//Impressão
void Funcionario::print() 
{
  cout << "[Funcionario]" << endl
  << "  Idade: " << idade << endl
  << "  RGFunc: " << rg << endl;
}

