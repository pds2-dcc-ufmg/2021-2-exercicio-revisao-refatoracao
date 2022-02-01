#include <iostream>
#include "Cliente.hpp"

Cliente::Cliente(std::string _nome,
				std::string _endereco,
				std::string _cep) {
	nome = _nome;
	endereco = _endereco;
	cep = _cep;
}

void Cliente::print() {
	std::cout 	<< "[Cliente]" 		<< std::endl
				<< "  Nome: " 		<< nome 	<< std::endl
				<< "  Endereco: " 	<< endereco << std::endl
				<< "  CEP: " 		<< cep 		<< std::endl;
}
