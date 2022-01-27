#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:

		string NOME;
		string endereco;
		int Cep;

	public:

		string getNome();
		void setNome(string newNome);

		string getEndereco();
		void setEndereco(string newEndereco);

		int getCep();
		void setCep(int newCep);


		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
