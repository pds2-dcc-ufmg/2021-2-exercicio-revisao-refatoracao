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
		Cliente(string n, string e, string c, string a)
			: NOME(n), endereco(e), Cep(c), AlturaDosPais(a) {};

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
