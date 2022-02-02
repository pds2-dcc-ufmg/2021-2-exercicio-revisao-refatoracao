#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente{
	public:
		Cliente(std::string nome, std::string endereco, std::string cep);
		std::string nome;
		std::string endereco;
		std::string cep;
		void print(); 
};

#endif