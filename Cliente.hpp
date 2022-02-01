#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
	public:
		Cliente();
		Cliente(std::string _nome, 
				std::string _endereco,
				std::string _cep);

	public:
		std::string nome;
		std::string endereco;
		std::string cep;

		void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
