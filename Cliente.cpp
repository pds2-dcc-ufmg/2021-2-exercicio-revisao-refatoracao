#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << get_Nome() << endl
		 << "  Endereco: " << get_Endereco() << endl
		 << "  CEP: " << get_Cep() << endl;

}

std::string Cliente::get_Nome(){
	return this->NOME;
}

std::string Cliente::get_Cep(){
	return this->Cep;
}

std::string Cliente::get_Endereco(){
	return this->endereco;
}

