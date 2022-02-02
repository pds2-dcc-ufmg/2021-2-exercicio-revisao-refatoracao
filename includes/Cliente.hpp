#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{

public:
	void print(); // imprime na tela os dados de um cliente cadastrado

	Cliente(std::string nome, std::string endereco, std::string cep);
	std::string getNome();

private:
	std::string nome;
	std::string endereco;
	std::string cep;
};

#endif
