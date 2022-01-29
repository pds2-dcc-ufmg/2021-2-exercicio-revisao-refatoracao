#include "Cliente.hpp"

void Cliente::imprime_Cliente()
{
	std::cout << "[Cliente]" << std::endl
			  << "Nome: " << nome_cliente << ", Endereco: " << endereco_cliente << ", CEP: " << cep_cliente << std::endl;
}
