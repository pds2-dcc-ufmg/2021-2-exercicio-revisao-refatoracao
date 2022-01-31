#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

/*
Essa eh a classe de um cliente da empresa
*/

class Cliente{

	public:
		void print(); //imprime os dados de um cliente
		Cliente(std::string nome, std::string endereco, std::string cep); //construtor da classe
        std::string getNome(); //acessa o nome do cliente

	private:
		/*
		Atribuicoes relativas ao cliente
		*/
		std::string _nome; 
		std::string _endereco; 
		std::string _cep; 

};

#endif

