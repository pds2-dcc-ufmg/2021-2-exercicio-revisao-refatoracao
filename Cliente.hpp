#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

public:
	string _nome;
	string _endereco;
	string _cep;

	void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
