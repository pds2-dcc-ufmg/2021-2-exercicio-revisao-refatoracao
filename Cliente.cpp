#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Pessoa.hpp"
using namespace std;
void Cliente::print(){


	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << nome << std::endl
		 << "  Endereco: " << endereco << std::endl
		 << "  CEP: " << Cep << std::endl;

}


	