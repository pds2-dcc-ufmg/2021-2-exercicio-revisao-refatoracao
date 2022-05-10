#include "Cliente.hpp"

Cliente::Cliente (std::string _nome, std::string _endereco, unsigned _cep) :
	nome(_nome), endereco(_endereco), cep(_cep) {}


std::string Cliente::GetNome() {
	return nome;
}

void Cliente::SetNome (std::string _nome) {
	nome = _nome;
}

void Cliente::print() {

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << nome << std::endl
		 << "  Endereco: " << endereco << std::endl
		 << "  CEP: " << cep << std::endl;

}

