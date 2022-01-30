#include "Cliente.hpp"

void Cliente::imprime_Cliente()
{
	std::cout << "[Cliente]" << std::endl
			  << "  Nome: " << nome_cliente << std::endl
			  << "  Endereco: " << endereco_cliente << std::endl
			  << "  CEP: " << cep_cliente << std::endl;
}
