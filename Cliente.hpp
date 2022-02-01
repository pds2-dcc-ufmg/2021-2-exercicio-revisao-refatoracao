#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{
	public:
		string nome;
		string endereco;
		string cep;

		void print();
		Cliente(string nome, string endereco, string cep):
		nome(nome), endereco(endereco), cep(cep){};
};
#endif