#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]\n" << "Nome: " << nome << "\nEndereco: " << endereco << "\nCEP: " << cep << std::endl;

}