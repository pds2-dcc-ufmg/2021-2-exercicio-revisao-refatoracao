#include "Cliente.hpp"
#include <iostream>
#include <string>

Cliente::Cliente (std::string nome, int cep, std::string endereco) : _nome(nome), _cep(cep), _endereco(endereco) {
	if (cep < 0) {
		std::cout << "CEP inválido.";
	}
}

void Cliente::imprimeDadosCliente() {
	std::cout << "[Cliente]" << std::endl;
	std::cout << "Nome: " << _nome << std::endl;
	std::cout << "CEP: " << _cep << std::endl;
	std::cout << "Endereço: " << _endereco << std::endl;
}
