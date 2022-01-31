#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << get_Nome << endl
		 << "  Endereco: " << get_Cep << endl
		 << "  CEP: " << get_Endereco << endl;

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

