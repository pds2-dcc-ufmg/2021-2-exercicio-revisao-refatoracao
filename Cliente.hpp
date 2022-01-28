#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:
		string NOME;
		string endereco;
		string Cep;
		string AlturaDosPais;
	public:
		void print(); // imprime na tela os dados de um cliente cadastrado
		void setNome(string name);
		void setEndereco(string endereco);
		void setCep(string cep);
		void setAlturaDosPais(string altura);
		
};

#endif
