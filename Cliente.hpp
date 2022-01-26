#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		string NOME;
		string endereco;
		string Cep;

		// imprime na tela os dados de um cliente cadastrado
		void print(); 

};
#endif
