#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:

		std::string Nome;
		std::string Endereco;
		std::string Cep;
		
	public:
		Cliente(std::string Nome,
		std::string Endereco,
		std::string Cep);

		void Print(); // imprime na tela os dados de um cliente cadastrado

};

#endif