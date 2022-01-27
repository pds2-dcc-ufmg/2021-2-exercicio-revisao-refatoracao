#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string _nome;
		string _endereco;
		string _CEP;
		

		void print(); // imprime na tela os dados de um cliente cadastrado
	private:
		
};

#endif
