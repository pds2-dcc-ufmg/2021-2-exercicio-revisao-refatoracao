#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente : public Pessoa {
	private:
		std::string endereco;
		int cep;

	public: 
		Cliente(std::string nome, std::string endereco, int cep) : Pessoa(nome) {
			this->endereco = endereco;
			this->cep = cep;
		}
};

#endif