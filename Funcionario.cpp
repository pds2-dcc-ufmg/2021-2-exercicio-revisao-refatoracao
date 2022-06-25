#include <iostream>
#include <string>
#include "Funcionario.hpp"

using namespace std;

void Funcionario::setSalarioBase(double salario_base)
{
    this->_salario_base = salario_base;
}
double Funcionario::getSalarioBase()
{
    return _salario_base;
}

void Funcionario::setNome(string nome)
{
    this->_nome = nome;
}
string Funcionario::getNome()
{
    return _nome;
}

void Funcionario::setIdade(int idade)
{
    this->_idade = idade;
}
int Funcionario::getIdade()
{
    return _idade;
}

void Funcionario::setRgFunc(int rg_func)
{
    this->_rg_func = rg_func;
}
int Funcionario::getRgFunc()
{
    return _rg_func;
}

void Funcionario::print()
{
    cout << "[Funcionario]" << endl
              << "  Nome: " << _nome << endl
              << "  Idade: " << _idade << endl
              << "  RGFunc: " << _rg_func << endl
              << "  SalarioBase: R$ " << fixed << setprecision(2) << _salario_base << endl;
}
