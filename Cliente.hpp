#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	private:
	string _endereco;
	string _cep;

	public:
	string _nome;
	Cliente(string nome, string endereco, string cep);
	void printDados() const;
};

#endif
