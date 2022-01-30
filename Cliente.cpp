
#include "Cliente.hpp"

/*
Arquivo com as implementacoes dos metodos da classe Cliente
*/

Cliente::Cliente(std::string nome, 
				 std::string endereco, 
				 std::string cep) {
		this->_nome = nome;
		this->_endereco = endereco;
		this->_cep = cep;
}


std::string Cliente::getnome_cliente() {
		return this->_nome;
}


void Cliente::imprimir_dados_cliente() {
		std::cout << "[Cliente]" << std::endl
    			  << "  Nome: " << this->_nome << std::endl
				  << "  Endereco: " << this->_endereco << std::endl
				  << "  CEP: " << this->_cep << std::endl;
}

