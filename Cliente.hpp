#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

/*
Classe que representa um cliente da empresa
*/
class Cliente {

	public:

		//metodo construtor da classe
		Cliente(std::string nome = " ", 
				std::string endereco = " ", 
				std::string cep = " ");

		// retorna o nome do cliente
		std::string getnome_cliente(); 

		// imprime na tela os dados de um cliente cadastrado
		void imprimir_dados_cliente(); 
	
	private:

		/*
		Dados relacionados ao cliente
		*/
		std::string _nome;
		std::string _endereco;
		std::string _cep;

};

#endif
