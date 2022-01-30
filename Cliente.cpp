#include <iostream>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
        	  << "  Nome: " << nome << std::endl
		  << "  Endereco: " << endereco << std::endl
		  << "  CEP: " << cep << std::endl;

}

std::string Cliente::getNome() {return(nome);}
std::string  Cliente::getEndereco() {return(endereco);}
std::string Cliente::getCep() {return(cep);}

void Cliente::setNome(std::string novoNome) {nome = novoNome;}
void Cliente::setEndereco(std::string novoEndereco) {endereco = novoEndereco;}
void Cliente::setCep(std::string novoCep) {cep = novoCep;}
