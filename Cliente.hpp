#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>

class Cliente
{

public:

	Cliente(std::string nome, std::string endereco, int cep);
	void print();
private: 
	std::string nome;
	std::string endereco;
	int cep;
};

#endif
