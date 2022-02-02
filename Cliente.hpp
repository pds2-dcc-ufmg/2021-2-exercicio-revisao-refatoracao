#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>
using namespace std;

class Cliente
{

public:
	string nome;
	string endereco;
	string cep;
	string altura_dos_pais;

	void print()
	{
		std::cout << "[Cliente]" << endl
				  << "  Nome: " << nome << endl
				  << "  Endereco: " << endereco << endl
				  << "  CEP: " << cep << endl;
	} // imprime na tela os dados de um cliente cadastrado
};

#endif
