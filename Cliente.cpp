#include <iostream>
#include "Cliente.hpp"

Cliente::Cliente(std::string nome,std::string endereco, std::string Cep){
     this->NOME=nome;
	 this->endereco=endereco;
	 this->Cep=Cep;
}

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << NOME << std::endl
		 << "  Endereco: " << endereco << std::endl
		 << "  CEP: " << Cep << std::endl;
}
