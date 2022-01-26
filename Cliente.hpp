#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {

	public:
		std::string nome;
		std::string endereco;
		std::string cep;

		void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
