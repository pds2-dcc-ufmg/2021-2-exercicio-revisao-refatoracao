#ifndef CLIENTE_HPP
#define CLIENTE_HPP

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

		void print();
};

#endif
