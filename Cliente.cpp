#include <iostream>
#include "Cliente.hpp"

void Cliente::print(){ //Saida de dados na formatacao dos Clientes

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << this->_nome << std::endl
		 << "  Endereco: " << this->_endereco << std::endl
		 << "  CEP: " << this->_cep << std::endl;

}
