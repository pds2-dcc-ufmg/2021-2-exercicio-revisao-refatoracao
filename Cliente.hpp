#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>
using namespace std;

class Cliente{

	public:

		string nome;
		string endereco;
		string cep;

		void imprimeCliente(); // imprime na tela os dados de um cliente cadastrado

};

#endif
