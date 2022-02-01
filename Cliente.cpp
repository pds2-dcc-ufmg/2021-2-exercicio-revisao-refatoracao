#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::Print(){

		std::cout << "[Cliente]" << std::endl
         << "  Nome: " << this->Nome << std::endl
		 << "  Endereco: " << this->Endereco << std::endl
		 << "  CEP: " << this->Cep << std::endl;

}

Cliente::Cliente(std::string Nome = " ",
		std::string Endereco = " ",
		std::string Cep = " ") : Endereco(Endereco), Nome(Nome), Cep(Cep) {}

std::string Cliente::getNome(){
		return this->Nome;
}
std::string Cliente::getEndereco(){
		return this->Endereco;
}
std::string Cliente::getCep(){
		return this->Cep;
}
Cliente::~Cliente() = default;