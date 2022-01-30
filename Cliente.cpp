#include "Cliente.hpp"

Cliente::Cliente(std::string nome , std::string endereco, std::string CEP){
	this->_nome = nome;
	this->_endereco = endereco;
	this->_CEP = CEP;

}

std::string Cliente::getNome () const{
	return this->_nome;
}
void Cliente::imprimirDados  ()const{

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << _nome << std::endl
		 << "  Endereco: " << _endereco << std::endl
		 << "  CEP: " << _CEP << std::endl;

}

