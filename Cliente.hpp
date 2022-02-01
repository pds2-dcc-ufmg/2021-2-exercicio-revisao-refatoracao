#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		/*
		Foi feito um construtor para a classe Cliente, além da declaração de suas variáveis como private,
		respeitando o encapsulamento.
		Para o acesso dessas variáveis foram feitas funções get() const, definidas no hpp
		Ademais, as variáveis foram inicializadas no construtor definido
		Foi arrumada a indentação
		*/

		Cliente (string nome, string endereco, string cep) : NOME(nome), 
															 endereco(endereco),
															 Cep(cep){};

		void print(); // imprime na tela os dados de um cliente cadastrado
		std::string getNome() const;
		std::string getEndereco() const;
		std::string getCep() const;
	
	private:
		string NOME;
		string endereco;
		string Cep;
		string AlturaDosPais;
};

#endif
