#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	 // todas as variaveis receberam a mesma formatacao
	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << cep << endl; //espacamentos desnecessarios removidos
}

