#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string NOME;
		string endereco;
		string Cep;

        Cliente(string NOME = "", string endereco = "", string Cep = "");

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
