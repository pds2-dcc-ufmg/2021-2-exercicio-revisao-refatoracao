#include "Funcionario.hpp"

void Funcionario::print()
{
    std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << this->_idade << std::endl
            << "  RGFunc: " << this->_rgFunc << std::endl;
}

void Funcionario::set_salarioBase(double salarioBase)
{
	this->_salarioBase = salarioBase;
}
void Funcionario::set_idade(int idade)
{
	this->_idade = idade;
}
void Funcionario::set_nome(std::string nome)
{
	this->_nome = nome;
}
void Funcionario::set_rgFunc(std::string rgFunc)
{
	this->_rgFunc = rgFunc;
}
double Funcionario::get_salarioBase()
{
	return this->_salarioBase;
}
int Funcionario::get_idade()
{
	return this->_idade;
}
std::string Funcionario::get_nome()
{
	return this->_nome;
}
std::string Funcionario::get_rgFunc()
{
	return this->_rgFunc;
}
