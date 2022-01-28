#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{

public:
	void print(); // imprime na tela os dados de um cliente cadastrado

	Cliente(std::string NOME, std::string endereco, std::string Cep) : Cliente(NOME, endereco, Cep, " ") {}

	Cliente(std::string NOME, std::string endereco, std::string Cep, std::string AlturaDosPais);

private:
	std::string NOME;
	std::string endereco;
	std::string Cep;
	std::string AlturaDosPais;
};

#endif
