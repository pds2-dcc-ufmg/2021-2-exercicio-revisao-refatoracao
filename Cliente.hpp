#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	public:
		std::string nome;
		std::string endereco;
		std::string cep;
		std::string alturaDosPais;

		void imprimeDados(); 
};

#endif