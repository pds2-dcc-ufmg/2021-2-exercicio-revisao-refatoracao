#include <iostream>

#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
        << "  Nome: " << getNome() << std::endl
	<< "  Endereco: " << getEndereco() << std::endl
	<< "  CEP: " << getCep() << std::endl;

}
