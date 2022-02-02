#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{

private:
	std::string Nome;
	std::string Endereco;
	std::string CEP;

public:
	Cliente(std::string Nome, std::string Endereco, std::string CEP);
	void Print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
