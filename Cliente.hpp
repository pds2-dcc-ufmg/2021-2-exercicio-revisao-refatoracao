#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		Cliente(std::string nome, std::string endereco, std::string cep): nome(nome), endereco(endereco), cep(cep) {}
		void print() const; // imprime na tela os dados de um cliente cadastrado
	
	private:

		std::string nome;
		std::string endereco;
		std::string cep;

};

#endif