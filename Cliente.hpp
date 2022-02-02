#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{
public:
	std::string nome;
	std::string endereco;
	std::string cep;

	Cliente(std::string nome1, std::string endereco1, std::string cep1);

	void print();
};

#endif
