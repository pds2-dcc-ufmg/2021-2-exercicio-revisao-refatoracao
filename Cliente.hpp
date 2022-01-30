#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

class Cliente
{

public:
	std::string nome_cliente;	  //nome do cliente
	std::string endereco_cliente; //endereco do cliente
	std::string cep_cliente;	  //CEP do cliente

	void imprime_Cliente(); // imprime na tela os dados de um cliente cadastrado
};

#endif
