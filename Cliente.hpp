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
		string getNOME();
		void setNOME(string NOME_NOVO);
		
		string getENDERECO();
		void setENDERECO(string ENDERECO_NOVO);
	
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
