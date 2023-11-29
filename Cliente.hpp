#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>


class Cliente{

	public:
		// construtor da classe 
		Cliente(std::string nome, std::string endereco, std::string cep);
		Cliente(std::string nome);
		
		// imprime dados do cliente cadastrado;

		void print() const; 

		// pega nome
		std::string get_nome() const;


	private:
		std::string _nome;
		std::string _endereco;
		std::string _cep;


};

#endif
