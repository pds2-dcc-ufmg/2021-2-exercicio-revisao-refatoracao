#include <iostream>
#include <string>
#include "Cliente.hpp"

// Mudança nos padrões de codificação, como deixar todas as variáveis minúsculas 
// Além disso, adicionar std:: onde é necessário

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl;
    std::cout << "  Nome: " << nome << std::endl;
	std::cout << "  Endereco: " << endereco << std::endl;
	std::cout << "  CEP: " << cep << std::endl;

}