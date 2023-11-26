#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print() const {
	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << this->getNome() << std::endl
	 << "  Endereco: " << this->getEndereco() << std::endl
	 << "  CEP: " << this->getCep() << std::endl;
}
