#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	public:
		std::string NOME, endereco, Cep, AlturaDosPais;

		void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
