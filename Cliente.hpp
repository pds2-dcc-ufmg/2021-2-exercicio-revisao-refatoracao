#ifndef CLIENTE_H
#define CLIENTE_H
#include "Pessoa.hpp"
#include <string>


class Cliente: public Pessoa{

	public:

		
		std::string endereco;
		std::string Cep;
		std::string AlturaDosPais;

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
