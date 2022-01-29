#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:

		std::string Nome;
		std::string Endereco;
		std::string Cep;
		
	public:
		std::string Cliente::getNome();
		std::string Cliente::getEndereco();
		std::string Cliente::getCep();

		Cliente(std::string Nome,
		std::string Endereco,
		std::string Cep);

		void Print(); // imprime na tela os dados de um cliente cadastrado

};

#endif