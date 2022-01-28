#include <iostream>
#include <string>

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"

double Venda::GetValor()
{
	return _valor;
}

std::string Venda::GetDescricao()
{
	return _descricao;
}

void Venda::SetValor(double valor)
{
	this -> _valor = valor;
}

void Venda::SetDescricao(const std::string& descricao)
{
	this -> _descricao = descricao;
}

void Venda::print()
{
	std::cout << " [Venda] " << std::endl
	<< " Descricao: " << GetDescricao() << std::endl
	<< " Valor: R$" << std::setprecision(2) << std::fixed << GetValor() << std::endl;
	this -> especialista.print();
	this -> cliente.print();
}
