#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{
public:
	std::string nome;
	std::string endereco;
	std::string cep;

	Cliente(std::string nome, std::string endereco, std::string cep);

	void print();
};

#endif
