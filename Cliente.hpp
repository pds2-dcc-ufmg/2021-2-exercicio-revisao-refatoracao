#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>
using namespace std;
class Cliente{

	public:
		string nome;
		string endereco;
		string cep;

		Cliente () {};
		Cliente(string nome, string endereco, string cep); 
		void printCliente();
};

#endif
