#include <iostream>
#include <string>
#include "Cliente.hpp"





void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << this->getNOME() << endl
		 << "  Endereco: " << this->getEndereco() << endl
		 << "  CEP: " << this->getCEP() << endl;

}



void Cliente::setNOME(const std::string& nome) {
    // TODO: Implemente este metodo
    this->_NOME = nome;
}

void Cliente::setEndereco(const std::string& endereco) {
    // TODO: Implemente este metodo
    this->_endereco = endereco;
}


void Cliente::setCEP(const std::string& CEP) {
    // TODO: Implemente este metodo
    this->_Cep = CEP;
}

void Cliente::setAlturaDosPais(const std::string& altura_dos_pais) {
    // TODO: Implemente este metodo
    this->_AlturaDosPais = altura_dos_pais;
}

std::string Cliente::getNOME() const{
	return this->_NOME;
}

std::string Cliente::getEndereco() const{
	return this->_endereco;
}

std::string Cliente::getCEP() const{
	return this->_Cep;
}

std::string Cliente::getAlturaDosPais() const{
	return this->_AlturaDosPais;
}


