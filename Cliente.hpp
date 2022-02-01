#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string Nome;
		string Endereco;
		string Cep;
		string AlturaDosPais;

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
