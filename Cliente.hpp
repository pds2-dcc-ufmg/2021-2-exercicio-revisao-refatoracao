#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>


class Cliente{

	public:

		std::string NOME;
		std::string endereco;
		std::string Cep;

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
