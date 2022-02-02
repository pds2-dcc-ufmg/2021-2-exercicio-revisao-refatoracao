#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Pessoa.hpp"

class Cliente : public Pessoa{
	public:
		Cliente(std::string nome, int idade, std::string endereco, int cep) 
		:Pessoa(nome, idade){
			this->endereco = endereco;
			this->cep = cep;
		}

		void print() override {
			std::cout << "[Cliente]" << std::endl;
    		std::cout<< "  Nome: " << nome << std::endl;
			std::cout<< "  Endereco: " << endereco << std::endl;
			std::cout<< "  CEP: " << cep << std::endl;
		};

	private:
		std::string endereco;
		int cep;
};

#endif
