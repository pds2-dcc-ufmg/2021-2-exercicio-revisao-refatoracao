#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		string get_Nome();
		string get_Endereco();
		string get_Cep();
		
		void print(); // imprime na tela os dados de um cliente cadastrado

		string NOME;
		string endereco;
		string Cep;
		string AlturaDosPais;

};

#endif
