#include <iostream>
#include <string>
#include "Cliente.hpp"

//Imprime as informações do cliente, na ordem nome, endereço e CEP.
void Cliente::print(){
	cout << "[Cliente]" << endl; 
	cout << "  Nome: " << NOME << endl;
	cout << "  Endereco: " << endereco << endl;
	cout << "  CEP: " << Cep << endl;
}
