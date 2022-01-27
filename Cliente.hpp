#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		Cliente(std::string nome, std::string endereco, std::string cep): _nome(nome), _endereco(endereco), _cep(cep) {}

		void print();

	private:
		std::string _nome;
		std::string _endereco;
		std::string _cep;
        friend class Venda;
};

#endif
