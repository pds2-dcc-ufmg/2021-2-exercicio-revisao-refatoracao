#include "Cliente.hpp"

Cliente::Cliente(std::string nomeAux,
				 std::string enderecoAux,
				 std::string cepAux)
{
	nome = nomeAux;
	endereco = enderecoAux;
	cep = cepAux;
}

void Cliente::imprimirDados()
{
	std::cout << "[Cliente]" << std::endl
			  << "  Nome: " << nome << std::endl
			  << "  Endereco: " << endereco << std::endl
			  << "  CEP: " << cep << std::endl;
}