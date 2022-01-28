#include <iostream>
#include <string>

#include "Cliente.hpp"

std::string Cliente::GetNome()
{
	return _nome;
}

std::string Cliente::GetEndereco()
{
	return _endereco;
}

std::string Cliente::GetCep()
{
	return _cep;
}

void Cliente::SetNome(const std::string& nome)
{
	this -> _nome = nome;
}

void Cliente::SetEndereco(const std::string& endereco)
{
	this -> _endereco = endereco;
}

void Cliente::SetCep(const std::string& cep)
{
	this -> _cep = cep;
}

void Cliente::print(){
\\Falta o espaço ser definido no endl + padronizar o espaçamento
	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << GetNome() << std::endl
	 << "  Endereco: " << GetEndereco() << endl
	 << "  CEP: " << GetCep() << std::endl;

}


