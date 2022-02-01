#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string nome;
		string endereco;
		string Cep;
		string AlturaDosPais;
		Cliente (string nome,string endereco,string cep);
		Cliente();

		void print(); 
};

#endif
