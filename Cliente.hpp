#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include "Pessoa.hpp"

class Cliente : public Pessoa {
	private:
		std::string endereco;
		int cep;

	public: 
		Cliente(std::string nome, std::string endereco, int cep) : Pessoa(nome) {
			this->endereco = endereco;
			this->cep = cep;
		}
		
		Cliente(){}

		void imprimirDados() override {
			std::cout << "[Cliente]" << std::endl;
			std::cout << "  Nome: " << this->nome << std::endl;
			std::cout << "  Endereco: " << this->endereco << std::endl;
			std::cout << "  CEP: " << this->cep << std::endl;
		}
};

#endif