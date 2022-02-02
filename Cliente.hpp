#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string nome;
		string endereco;
		string cep;
		string AlturaDosPais;

		void print(); // imprime na tela os dados de um cliente cadastrado

		Cliente() {}
		Cliente(string nome, string endereco, string cep)
        : nome(nome), endereco(endereco), cep(cep)
    	{}
};

#endif
