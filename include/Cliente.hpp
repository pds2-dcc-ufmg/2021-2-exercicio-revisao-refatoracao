#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <istream>

using namespace std;

class Cliente{
		string _nome;
		string _endereco;
		string _cep;

	public:
	    Cliente() {}

	    Cliente(string nome, string endereco, string cep):
	        _nome(nome), _endereco(endereco), _cep(cep){}

        Cliente(Cliente& cliente):
            Cliente(cliente._nome, cliente._endereco, cliente._cep) {}

		void print() const; // imprime na tela os dados de um cliente cadastrado

        string getNome() { return _nome; }

        friend istream& operator>>(istream& in, Cliente& cliente);
};

#endif
