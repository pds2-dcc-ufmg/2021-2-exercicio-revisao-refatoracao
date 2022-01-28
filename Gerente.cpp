#include <iostream>
#include <string>

#include "Funcionario.hpp"
#include "Gerente.hpp"

double Gerente::GetBonificacao()
{
	return _bonificacao;
}

double Gerente::GetValorBonificacao()
{
	return _valorBonificacao;
}

void Gerente::SetValorBonificacao(int valorBonificacao)
{
	this -> _valorBonificacao = valorBonificacao;
}

void Gerente::SetBonificacao(int numTotalVendas)
{
	this -> _bonificacao = numTotalVendas * this -> _valorBonificacao;
}

void Gerente::print()
{
	std::cout << " [Gerente] " << std::endl;
	Funcionario::print();
	std::cout << "Salario Total: R$" << std::setprecision(2) << std::fixed 
	<< GetBonificacao() + GetSalarioBase() << std::endl;
}



