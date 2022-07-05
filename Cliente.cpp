#include <iostream>
#include <string>
#include "Cliente.hpp"
using namespace std;
void Cliente::print(){
	std::cout << "[Cliente]" << endl
         << "  Nome: " <<nome<< endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " <<cep<< endl;
}

