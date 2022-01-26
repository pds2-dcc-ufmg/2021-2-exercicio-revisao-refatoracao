#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

class Cliente
{
private:
	std::string nome;
	std::string endereco;
	std::string cep;

public:
	Cliente(std::string nomeAux = "",
			std::string enderecoAux = "",
			std::string cepAux = "");

	void imprimirDados();
	
	std::string getNome() { return nome; }
};

#endif