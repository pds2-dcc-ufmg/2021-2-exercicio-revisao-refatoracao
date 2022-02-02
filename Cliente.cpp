#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
        std::cout << " Nome: " << Nome << std::endl;
	std::cout << " Endereço: " << Endereco << std::endl;
	std::cout << " CEP: " << Cep << std::endl;
}

