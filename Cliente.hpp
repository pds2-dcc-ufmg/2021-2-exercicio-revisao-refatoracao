#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:

		string NOME;
		string endereco;
		string Cep;

	public:
		void setNOME(string name);
		string getNOME();
		void setendereco(string end);
		string getendereco();
		void setCep(string C);
		string getCep();
		
		void print();

};

#endif
