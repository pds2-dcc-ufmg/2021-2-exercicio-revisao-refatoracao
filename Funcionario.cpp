#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::setSalarioBase(double salarioBase)
{
    this->_SalarioBase = salarioBase;
}
double Funcionario::getSalarioBase()
{
    return this->_SalarioBase;
}

void Funcionario::setNome(std::string nome)
{
    this->_nome = nome;
}
std::string Funcionario::getNome()
{
    return this->_nome;
}

void Funcionario::setIdade(int idade)
{
    this->_idade = idade;
}
int Funcionario::getIdade()
{
    return this->_idade;
}

void Funcionario::setRgFunc(int rgFunc)
{
    this->_rgFunc = rgFunc;
}
int Funcionario::getRgFunc()
{
    return this->_rgFunc;
}

void Funcionario::print()
{
    std::cout << "[Funcionario]" << std::endl
              << "  Nome: " << _nome << std::endl
              << "  Idade: " << _idade << std::endl
              << "  RGFunc: " << _rgFunc << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _SalarioBase << std::endl;
}