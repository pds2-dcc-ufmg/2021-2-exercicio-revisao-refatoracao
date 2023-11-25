#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

private:
	string _nome;
	string _endereco;
	string _cep;

public:

	Cliente(string nome, string endereco, string cep):
		_nome(nome), _endereco(endereco), _cep(cep) {}

	void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
