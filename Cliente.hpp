#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente : public Pessoa {
	private:
		std::string endereco;
		std::string cep;
		
	public: 
		Cliente(std::string nome, int idade, std::string endereco, std::string cep) : Pessoa(nome, idade) {
			this->endereco = endereco;
			this->cep = cep;
		}
};

#endif