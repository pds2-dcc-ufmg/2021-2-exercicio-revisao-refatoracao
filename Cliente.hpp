#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

class Cliente{
	public:
		std::string nome;
		std::string endereco;
		std::string cep;

		// imprime na tela os dados de um cliente cadastrado
		void print();
};

#endif