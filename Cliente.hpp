#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

using namespace std;

class Cliente{

	public:

	Cliente(): NOME(0), endereco(0),  Cep(0){}

	void print(); // imprime na tela os dados de um cliente cadastrado

	string NOME;
	string endereco;
	string Cep;

};

#endif
