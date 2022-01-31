#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}

void Cliente::setNOME(string name){
	NOME = name;
}
string Cliente::getNOME(){
	return NOME;
}
void Cliente::setendereco(string end){
	endereco = end;
}
string Cliente::getendereco(){
	return endereco;
}
void Cliente::setCep(string C){
	Cep = C;
}
string Cliente::getCep(){
	return Cep;
}
