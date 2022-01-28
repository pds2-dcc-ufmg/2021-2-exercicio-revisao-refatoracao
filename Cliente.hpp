#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente {

	public:
		
		string getNome();
		string getEndereco();
		string getCep();

		Cliente(string nome, string endereco, string cep);

		void print(); 

	private:

		string nome;
		string endereco;
		string cep;

};

#endif
