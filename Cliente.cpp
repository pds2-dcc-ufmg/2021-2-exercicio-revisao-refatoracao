#include <iostream>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
        	  << "  Nome: " << nome << endl
		  << "  Endereco: " << endereco << endl
		  << "  CEP: " << cep << endl;

}

std::string Cliente::getNome() {return(nome);}
std::string  Cliente::getEndereco() {return(endereco);}
std::string Cliente::getCep() {return(cep);}

void Cliente::setNome(std::string novoNome) {nome = novoNome;}
void Cliente::setEndereco(std::string novoEndereco) {endereco = novoEndereco;}
void Cliente::setCep(std::string novoCep) {cep = novoCep;}
