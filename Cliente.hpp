#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:

		std::string Nome;
		std::string Endereco;
		std::string Cep;
		
	public:
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif