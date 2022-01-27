#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>


class Cliente {

	private:

		std::string nome;
		std::string endereco;
		unsigned cep;
		
	public:

		Cliente(std::string _nome, std::string _endereco, unsigned _cep);

		std::string GetNome();
		void SetNome(std::string _nome);

		void print(); // imprime na tela os dados de um cliente cadastrado


};

#endif
