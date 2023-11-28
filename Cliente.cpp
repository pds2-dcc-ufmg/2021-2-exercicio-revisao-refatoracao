#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

};
string Cliente::get_nome(){
	return nome;
};
void Cliente::set_nome(string name){
	nome = name;
};
string Cliente::get_endereco(){
	return endereco;
};
void Cliente::set_endereco(string adress){
	endereco = adress;
};
string Cliente::get_Cep(){
	return Cep;
};
void Cliente::set_Cep(string cep){
	Cep = cep;
};
string Cliente::get_AlturaDosPais(){
	return AlturaDosPais;
};
void Cliente::set_AlturaDosPais(string height){
	AlturaDosPais = height;
};

