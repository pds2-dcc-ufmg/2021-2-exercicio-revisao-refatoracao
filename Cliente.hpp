#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		Cliente();
		Cliente(string, string, string);

		void setNome(string);

		void setEndereco(string);

		void setCep(string);

		string getNome();

		string getEndereco();

		string getCep();

		void print(); 

	private:
		string nome;
		string endereco;
		string cep;
};

#endif
