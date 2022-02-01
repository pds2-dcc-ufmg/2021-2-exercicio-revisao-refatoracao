#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

class Cliente{

	public:

		Cliente();
		Cliente(std::string, std::string, std::string);
		std::string getNome();
		void imprimeDados();

	private:
		std::string nome;
		std::string endereco;
		std::string CEP;

};

#endif
