#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Pessoa.h"

void Cliente::imprimeDados() override {
	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << cep << endl;
}