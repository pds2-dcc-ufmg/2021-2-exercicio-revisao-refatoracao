#include "Cliente.hpp"

void Cliente::imprime_dados(){
  std::cout << "[Cliente]" << std::endl
        << "  Nome: " << _nome << std::endl
		<< "  Endereco: " << _endereco << std::endl
		<< "  CEP: " << _cep << std::endl;
}

