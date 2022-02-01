#include "Cliente.hpp"

Cliente::Cliente(const string& nome,const string& endereco, int cep) {
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cep = cep;
}

// void Cliente::setCliente(const string& nome, const string& endereco, int cep) {}

void Cliente::print() {
	std::cout << "[Cliente]" << endl
			<< "  Nome: " << this->getNome() << endl
			<< "  Endereco: " << this->getEndereco() << endl
			<< "  CEP: " << this->getCep() << endl;
}

string Cliente::getNome() {
	return this->_nome;
}

string Cliente::getEndereco() {
	return this->_endereco;
};

int Cliente::getCep() {
	return this->_cep;
}

