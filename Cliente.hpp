#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

class Cliente {
private:
	std::string _nome;
	int _cep;
	std::string _endereco;

public:
	Cliente (std::string nome, int cep, std::string endereco);
	void imprimeDadosCliente(); // imprime na tela os dados de um cliente cadastrado
};

#endif
