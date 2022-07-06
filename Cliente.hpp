#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
	    Cliente(std::string NOME, std::string endereco, std::string Cep);
		std::string getNome() const;
		void print(); // Imprime na tela os dados de um cliente cadastrado.

	private:	    
		std::string NOME;
		std::string endereco;
		std::string Cep;
};

#endif