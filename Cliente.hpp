#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string NOME;
		string endereco;
		string Cep;
		string AlturaDosPais;

		Cliente(string n, string e, string c)
			: NOME(n), endereco(e), Cep(c) {};

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
