#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	private: 
		string NOME;
		string endereco;
		string Cep;
		//string AlturaDosPais; variavel desnecessária
		
	public:
		void setdata(string name, string adress, string cep){
			NOME = name;
			endereco = adress;
			Cep = cep;
		} //criando metodo construtor
		void print() const; // imprime na tela os dados de um cliente cadastrado

};

#endif
