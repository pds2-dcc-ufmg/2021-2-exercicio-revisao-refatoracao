#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{

	public:
	
	Cliente(string nome, int cep, string endereco);
	
	void print();

	private:
	
	int _cep;
	string _nome;
	string _endereco;		

};

#endif
