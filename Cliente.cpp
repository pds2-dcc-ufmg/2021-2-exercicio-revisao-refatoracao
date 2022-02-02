#include <iostream>
#include <string>
#include "Cliente.hpp"

//Getters
string Cliente::get_nome()
{
  return nome;
}
string Cliente::get_endereco()
{
  return endereco;
}
string Cliente::get_cep()
{
  return cep;
}

//Setters
void Cliente::set_nome(string nome_inserido)
{
  nome = nome_inserido;
}
void Cliente::set_endereco(string endereco_inserido)
{
  endereco = endereco_inserido;
}
void Cliente::set_cep(string cep_inserido)
{
  cep = cep_inserido;
}

//Impressão
void Cliente::print()
{
	std::cout << "[Cliente]" << endl
    << "  Nome: " << nome << endl
		<< "  Endereco: " << endereco << endl
		<< "  CEP: " << cep << endl;
}

