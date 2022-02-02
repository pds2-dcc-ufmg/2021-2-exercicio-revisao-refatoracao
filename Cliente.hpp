#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>
using namespace std;

class Cliente{

	public:
		void get_NOME(string s){
		NOME = s;
	}

	void get_endereco(string s){
		endereco = s;
	}

	void get_Cep(string s){
		Cep = s;
	}

	void print(){

		std::cout << "[Cliente]" << endl
			<< "  Nome: " << NOME << endl
			<< "  Endereco: " << endereco << endl
			<< "  CEP: " << Cep << endl;

	}

	private:
		string NOME;
		string endereco;
		string Cep;
		string AlturaDosPais;
};

#endif
